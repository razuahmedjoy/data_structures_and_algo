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
            left = NULL;
            right = NULL;
        }
};

void level_order(Node *root)
{
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        Node *curr = q.front();
        q.pop();
        cout << curr->val << " ";

        if (curr->left)
            q.push(curr->left);

        if (curr->right)
            q.push(curr->right);
    }
}

Node *convert_array_to_bst(int a[], int n, int l, int r)
{

    if (l > r)
        return NULL;
    int mid = (l + r) / 2;
    Node *root = new Node(a[mid]);
    Node *leftroot = convert_array_to_bst(a, n, l, mid - 1);
    Node *rightroot = convert_array_to_bst(a, n, mid + 1, r);
    root->left = leftroot;
    root->right = rightroot;
    return root;
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    Node *root = convert_array_to_bst(a, n, 0, n - 1);
    level_order(root);
    return 0;
}