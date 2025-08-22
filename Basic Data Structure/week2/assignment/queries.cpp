#include <bits/stdc++.h>

using namespace std;

class Node
{
public:
    long long int val;
    Node *next;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
void print_linked_list(Node * &head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

int size_linked_list(Node *head)
{
    int cnt = 0;
    Node *tmp = head;
    while (tmp != NULL)
    {
        cnt++;
        tmp = tmp->next;
    }
    return cnt;
}

void insertAtHead(Node *&head, Node *&tail, long long int val)
{

    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    newNode->next = head;
    head = newNode;
}

void insertAtTail(Node *&head, Node *&tail, long long int val)
{

    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}



void deletefromAnyPosition(Node *&head, long long int pos)
{
    if (head == NULL) return;
    
    Node *tmp = head;
    for (int i = 1; i < pos; i++)
    {
        if (tmp != NULL && tmp->next != NULL)
        {
            tmp = tmp->next;
        }
        else
        {
            return; // Invalid position
        }
    }
    
    if (tmp == NULL || tmp->next == NULL)
    {
        return;
    }
    
    Node *toDelete = tmp->next;
    tmp->next = toDelete->next;
    delete toDelete;
}

int main()
{

    int q;
    cin >> q;

    Node *head = NULL;
    Node *tail = NULL;
    while (q--)
    {
        int x;
        long long int v;
        cin >> x >> v;

        if (x == 0)
        {
            insertAtHead(head, tail, v);
        }
        else if (x == 1)
        {
            insertAtTail(head, tail, v);
            

        }
        else if (x == 2)
        {
            if (v == 0)
            {
                // Delete from head
                if (head != NULL)
                {
                    Node *toDelete = head;
                    head = head->next;
                    delete toDelete;
                    
                    // If list becomes empty, update tail
                    if (head == NULL)
                    {
                        tail = NULL;
                    }
                }
            }
            else if(v >= size_linked_list(head)){
            }
            else if(v == size_linked_list(head) - 1)
            {
                // Delete from tail
                if (head != NULL && head->next != NULL)
                {
                    Node *tmp = head;
                    while (tmp->next->next != NULL)
                    {
                        tmp = tmp->next;
                    }
                    delete tmp->next;
                    tmp->next = NULL;
                    tail = tmp;
                }
                else if (head != NULL && head->next == NULL)
                {
                    // Only one element
                    delete head;
                    head = NULL;
                    tail = NULL;
                }
            }
            else
            {
                deletefromAnyPosition(head, v);
            }
        }
        print_linked_list(head);

    }

    return 0;
}