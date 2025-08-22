#include <bits/stdc++.h>

using namespace std;

class Node{
    public:
        int val;
        Node *next;
        Node *prev;

        Node(int val)
        {
            this->val = val;
            this->next = NULL;
            this->prev = NULL;
        }
};

void insert_at_tail(Node* &head, Node* &tail, int val)
{

    Node *newNode = new Node(val);

    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}

void insert_at_any_position(Node* &head, Node* &tail, int pos, int val){
    Node* newNode = new Node(val);
    Node* tmp = head;

    for(int i=0;i<pos-1;i++){
        tmp = tmp->next;
    }

    newNode->next = tmp->next;
    newNode->prev = tmp;
    if (tmp->next != NULL) {
        tmp->next->prev = newNode;
    } else {
        tail = newNode;
    }
    tmp->next = newNode;
}
void insert_at_head(Node* &head, Node* &tail, int val){
    Node* newNode = new Node(val);

    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }

    newNode->next = head;
    head->prev = newNode;
    head = newNode;

}

void print_forward(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

void print_backward(Node *tail)
{
    Node *tmp = tail;
    if (tmp == NULL)
        return;

    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->prev;
    }
    cout << endl;
}


int main()
{
    Node* head = NULL;
    Node* tail = NULL;

    int q;
    cin>>q;
    int size = 0;

    while(q--){
        int x,v;
        cin >> x >> v;
        if(x>size){
            cout << "Invalid" <<endl;
            continue;
        }
        else if(x==0){
            insert_at_head(head,tail,v);
            size++;
        }
        else if(x==size){
            insert_at_tail(head,tail,v);
            size++;
        }
        else{
            insert_at_any_position(head,tail,x,v);
            size++;
        }
        cout<<"L -> ";
        print_forward(head);
        cout<<"R -> ";
        print_backward(tail);


    }

    return 0;
}