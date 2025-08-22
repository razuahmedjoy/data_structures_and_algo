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

        // 1.
        Node *p = q.front();
        q.pop();

        // 2.

        int l, r;
        cin >> l >> r;
        Node *myleft, *myright;

        if (l == -1)
            myleft = NULL;
        else
            myleft = new Node(l);

        if (r == -1)
            myright = NULL;
        else
            myright = new Node(r);

        p->left = myleft;
        p->right = myright;

        // 3.
        if (p->left)
            q.push(p->left);
        if (p->right)
            q.push(p->right);
    }

    return root;
}

int count_nodes(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int l = count_nodes(root->left);
    int r = count_nodes(root->right);

    return l + r + 1;
}

int max_height(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }

    if (root->left == NULL && root->right == NULL)
    {
        return 0;
    }
    int l = max_height(root->left);
    int r = max_height(root->right);

    return max(l, r) + 1;
}

int main()
{

    Node *root = input_btree();

    int maxDepth = max_height(root) + 1;
    int totalNodes = count_nodes(root);
    if(totalNodes == pow(2,maxDepth)-1){
        cout << "YES"<<endl;
    }
    else{
        cout<< "NO" <<endl;
    }
    return 0;
}