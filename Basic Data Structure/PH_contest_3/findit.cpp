#include <bits/stdc++.h>

using namespace std;

class Node
{
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

Node *input_btree()
{
    int val;

    cin >> val;
    Node *root;

    if (val == -1)
        root = NULL;
    else
        root = new Node(val);

    queue<Node *> q;
    if (root)
        q.push(root);

    while (!q.empty())
    {

        // 1 . ber kora queue theke
        Node *p = q.front();
        q.pop();

        // 2. oi node ke niye kaj

        int l, r;
        cin >> l >> r;
        Node *pLeft, *pRight;

        if (l == -1)
            pLeft = NULL;
        else
            pLeft = new Node(l);

        if (r == -1)
            pRight = NULL;
        else
            pRight = new Node(r);

        p->left = pLeft;
        p->right = pRight;

        // 3. children push kora

        if (p->left)
        {
            q.push(p->left);
        }
        if (p->right)
        {
            q.push(p->right);
        }
    }
    return root;
}


void leaf_node(Node* root, vector<int> &v){

    if(root == NULL){
        return;
    }

    if(!root->left && !root->right){
        v[root->val]++;
    }


    leaf_node(root->left,v);
    leaf_node(root->right,v);


}

int main()
{
    vector<int> v(10);
    Node *root = input_btree();
    leaf_node(root,v);
    int max=0;
    int val = 0;
    for(int i=1;i<v.size();i++){
         if(max<v[i]){
            max = v[i];
            val = i;
         }
    }
    cout << val;

    return 0;
}