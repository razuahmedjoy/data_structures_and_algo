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

void insertAtAnyPosition(Node *&head, int pos, int val)
{
    // create a new node first
    Node *newNode = new Node(val);
    // iterate to the position where to insert
    Node *tmp = head;

    for (int i = 1; i < pos; i++)
    {
        cout << tmp->val << endl;
        if (tmp != NULL)
        {

            tmp = tmp->next;
        }
    }

    // first link the new node to the next node of tmp
    newNode->next = tmp->next;
    tmp->next = newNode;
}

void deletefromAnyPosition(Node *&head, long long int pos)
{

    Node *tmp = head;
    for (int i = 1; i < pos; i++)
    {
        if (tmp != NULL)
        {
            tmp = tmp->next;
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

 

    Node *head = NULL;
    Node *tail = NULL;

    int v;
    while(true){

        cin >> v;
        if(v == -1) break; // Use -1 to stop input
        insertAtTail(head, tail, v);
    }


    Node *current = head;
    while (current != NULL && current->next != NULL) {
        Node *runner = current;
        while (runner->next != NULL) {
            if (runner->next->val == current->val) {
                // Duplicate found, remove it
                Node *toDelete = runner->next;
                runner->next = runner->next->next;
                delete toDelete;
            } else {
                runner = runner->next;
            }
        }
        current = current->next;
    }
    
    // Print the modified linked list
    print_linked_list(head);
    

    return 0;
}