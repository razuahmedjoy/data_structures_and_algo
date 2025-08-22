#include<bits/stdc++.h>

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



Node* input_btree(){
    int val;
    cin >> val;
    Node* root;
    if(val==-1) root = NULL;
    else root = new Node(val);

    queue<Node*> q;
    if(root) q.push(root);

    while(!q.empty()){

        // 1.
        Node* p = q.front();
        q.pop();

        // 2.

        int l,r;
        cin >> l >> r;
        Node* myleft, *myright;

        if(l==-1) myleft = NULL;
        else myleft = new Node(l);

        if(r==-1) myright = NULL;
        else myright = new Node(r);

        p->left = myleft;
        p->right = myright;

        // 3.
        if(p->left)
            q.push(p->left);
        if(p->right)
            q.push(p->right);
        
    }

    return root;
}

int sum = 0;
void sumWithOutLeaf(Node* root){

    if(root == NULL){
        return;
    }
    if(root->left || root->right){
        sum = sum + root->val;
    }

    sumWithOutLeaf(root->left);
    sumWithOutLeaf(root->right);


}

int main(){

    Node* root = input_btree();
   
    sumWithOutLeaf(root);
    cout<<sum;
    

    return 0;
}