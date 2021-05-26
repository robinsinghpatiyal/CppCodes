#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;
};

Node *updation(int new_data)
{
    Node *new_root = new Node();
    new_root->data = new_data;
    new_root->left = NULL;
    new_root->right = NULL;
    return new_root;
}

Node *mirror(Node *root)
{
    if (root == NULL)
    {
        return root;
    }
    Node *temp = root->left;
    root->left = root->right;
    root->right = temp;
    if (root->left)
        mirror(root->left);
    if (root->right)
        mirror(root->right);
    return root;
}

void show(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        Node *temp = q.front();
        cout << temp->data << " ";
        q.pop();
        if (temp->left != NULL)
        {
            q.push(temp->left);
        }
        if (temp->right != NULL)
        {
            q.push(temp->right);
        }
    }
}

int main()
{
    Node *root = updation(1);
    root->left = updation(2);
    root->right = updation(3);
    root->right->left = updation(4);
    root->right->right = updation(5);

    show(root);
    cout << endl;
    root = mirror(root);
    cout << endl;
    show(root);
}