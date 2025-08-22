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

int count_nodes(Node* root){
    if(root == NULL)
        return 0;
    int l = count_nodes(root->left);
    int r = count_nodes(root->right);
    return l+r+1;
}

int count_leaf_nodes(Node* root){
    if(root == NULL)
        return 0;
    if(root->left==NULL && root->right == NULL){
        return 1;
    }
    int l = count_leaf_nodes(root->left);
    int r = count_leaf_nodes(root->right);

    return l+r;
}


int max_height(Node* root){
    if(root == NULL){
        return 0;
    }
    if(root->left == NULL && root->right==NULL){
        return 0;
    }
    int l = max_height(root->left);
    int r = max_height(root->right);

    return max(l,r) + 1;


}
int main()
{   
    // initialization
   
    Node* root = input_btree();
    // print_level_order(root);
    // cout << count_nodes(root);
    // cout << count_leaf_nodes(root);

    cout << max_height(root);

    

    return 0;
}