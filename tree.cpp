#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
    Node(int data)
    {
        this->data = data;
        left = right = NULL;
    }
};

void dfs(Node *root)
{
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        cout << q.front()->data << " ";
        if (q.front()->left != NULL)
            q.push(q.front()->left);
        if (q.front()->right != NULL)
            q.push(q.front()->right);
        q.pop();
    }
}

int main()
{
    int i = 1;
    struct Node *root = new Node(i++);
    root->left = new Node(i++);
    root->right = new Node(i++);
    root->left->left = new Node(i++);
    root->left->right = new Node(i++);
    root->right->left = new Node(i++);
    root->right->right = new Node(i++);
    dfs(root);
}