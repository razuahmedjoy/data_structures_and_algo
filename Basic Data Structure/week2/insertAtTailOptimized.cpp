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


void insertAtHead(Node* &head, int val){

    Node* newNode = new Node(val);
    newNode->next = head;
    head = newNode;
}

void insertAtTail(Node* &head, int val){

    Node* newNode = new Node(val);

    if(head == NULL){
        head = newNode;
        return;
    }

    Node* tmp = head;


    while(tmp->next != NULL){
        tmp = tmp->next;
    }
    tmp->next = newNode;
 

}


void print_linked_list(Node* head){
    Node* tmp = head;
    while(tmp!=NULL){
        cout << tmp->val << endl;
        tmp = tmp->next;
    }

}

int main(){

    Node* head = new Node(10);

    Node* a = new Node(20);
    Node* tail = new Node(30);

    head->next = a;
    a->next = tail;


    // insertAtHead(head,100);
    // insertAtHead(head,50);
    // print_linked_list(head);

    insertAtTail(head,16);
    insertAtTail(head,17);

    print_linked_list(head);


    return 0;
}