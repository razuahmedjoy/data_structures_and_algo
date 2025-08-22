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
void print_linked_list(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << endl;
        tmp = tmp->next;
    }
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

void insertAtHead(Node *&head, Node *&tail, int val)
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

void compare(Node* head1,Node* head2){

    bool isSame = true;



}

int main()
{

    Node *head = NULL;
    Node *tail = NULL;

    int x;
    while (true)
    {

        cin >> x;

        if (x == -1)
        {
            break;
        }

        insertAtTail(head, tail, x);
    }

    Node *head2 = NULL;
    Node *tail2 = NULL;
    Node* temp = head;

    bool isSame = true;

    while (true)
    {
        cin >> x;

        if (x == -1)
        {
            if(temp != NULL){
                isSame = false;
            }
            
            break;
        }
        
        insertAtTail(head2,tail2,x);
        if(temp == NULL || temp->val != x){
            isSame = false;
        }
        if(temp != NULL){
            temp = temp->next;
        }

    }

    if(isSame){
        cout << "YES" <<endl;
    }
    else{
        cout << "NO" <<endl;
    }
  

    return 0;
}