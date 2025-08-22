#include <bits/stdc++.h>

using namespace std;

class Node
{
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

void insert_at_tail(Node *&head, Node *&tail, int val)
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

void print_backward(Node *head)
{
    Node *tmp = head;
    if (tmp == NULL)
        return;

    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }

    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->prev;
    }
    cout << endl;
}

int main()
{

    Node *head = NULL;
    Node *tail = NULL;
    int val;
    int size = 0;
    while (cin >> val)
    {
        if (val == -1)
            break;
        insert_at_tail(head, tail, val);
        size++;
    }

    Node *tmp1 = head;
    Node *tmp2 = tail;
    bool isPalindrome = true;
    for (int i = 0; i < size / 2; i++)
    {
        if (tmp1->val != tmp2->val)
        {
            isPalindrome = false;
            break;
        }
        tmp1 = tmp1->next;
        tmp2 = tmp2->prev;
    }
    if (isPalindrome)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}