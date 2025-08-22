#include<bits/stdc++.h>

using namespace std;

class Node{
    public:
        int val;
        Node* next;
    
    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};



void print_linked_list(Node* head){
    Node* tmp = head;
    while(tmp!=NULL){
        cout << tmp->val << endl;
        tmp = tmp->next;
    }

    cout << "===========" << endl;

}

void insertAtAnyPosition(Node* &head, int pos, int val){
    // create a new node first
    Node* newNode = new Node(val);

    // iterate to the position where to insert
    Node* tmp = head;

    for(int i=1;i<pos;i++){
        cout << tmp->val <<endl;
        if(tmp != NULL){

            tmp = tmp->next;
        }
    }

    // first link the new node to the next node of tmp
    newNode->next = tmp->next;
    // link th
    tmp->next = newNode;

    
}


int main(){

    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);

    head->next = a;
    a->next = b;

    print_linked_list(head);


    
    insertAtAnyPosition(head,3,100);

    print_linked_list(head);

    

    return 0;
}