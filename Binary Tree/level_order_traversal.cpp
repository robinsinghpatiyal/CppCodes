#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;
};

Node *binaryTree(int new_data)
{
    Node *temp = new Node();
    temp->data = new_data;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}

//level order traversal using queue

void traverse(Node *root)
{

    if (root == NULL)
    {
        return;
    }

    queue<Node *> que;

    que.push(root);

    while (que.empty() == false)
    {
        Node *temp = que.front();
        cout << temp->data << " ";
        que.pop();

        if (temp->left != NULL)
        {
            que.push(temp->left);
        }

        if (temp->right != NULL)
        {
            que.push(temp->right);
        }
    }
}
int main()
{
    Node *root = NULL;
    root = binaryTree(1);
    root->left = binaryTree(2);
    root->right = binaryTree(3);
    root->left->left = binaryTree(4);
    root->left->right = binaryTree(5);
    root->right->left = binaryTree(6);
    root->right->right = binaryTree(7);

    traverse(root);
}