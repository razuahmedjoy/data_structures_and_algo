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

}


void print_linked_list_reverse(Node* head){
    if(head == NULL){
        return;
    }
    print_linked_list_reverse(head->next);
    cout << head->val << endl;
}

void insertAtTail(Node* &head, Node* &tail, int val){

    Node* newNode = new Node(val);
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}



int main(){

    Node* head = NULL;
    Node* tail = NULL;

    while(true){
        int x;
        cin >> x;
        if(x == -1){
            break;
        }
        insertAtTail(head,tail,x);
    }

    // print_linked_list(head);
    print_linked_list_reverse(head);
    

    return 0;
}