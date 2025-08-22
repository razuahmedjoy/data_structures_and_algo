#include <bits/stdc++.h>

using namespace std;

class Node{
    public:
        int val;
        Node *left;
        Node *right;

        Node(int val)
        {
            this->val = val;
            this->left = NULL;
            this->right = NULL;
        }
};


void print_inorder(Node* root){
    if(root == NULL){
        return;
    }
    print_inorder(root->left);
    cout << root->val << " ";
    print_inorder(root->right);
}

void print_level_order(Node* root){
    queue<Node*> q;
    q.push(root);

    while(!q.empty()){
        Node* f = q.front();
        q.pop();

        // print
        cout << f->val << " ";

        if(f->left)
            q.push(f->left);
        if(f->right)
            q.push(f->right);
    }
}


Node* input_btree(){
    int val;

    cin >> val;
    Node* root;

    if(val==-1) root = NULL;
    else root = new Node(val);

    queue<Node*> q;
    if(root) q.push(root);

    while(!q.empty()){
        
        // 1 . ber kora queue theke
        Node* p = q.front();
        q.pop();

        //2. oi node ke niye kaj

        int l,r;
        cin >> l >> r;
        Node *pLeft, *pRight;

        if(l==-1) pLeft = NULL;
        else pLeft = new Node(l);

        if(r==-1) pRight = NULL;
        else pRight = new Node(r);

        p->left = pLeft;
        p->right = pRight;


        // 3. children push kora

        if(p->left){
            q.push(p->left);
        }
        if(p->right){
            q.push(p->right);
        }
    }
    return root;
}

int main()
{   
    // initialization
   
    Node* root = input_btree();
    print_level_order(root);

    

    return 0;
}