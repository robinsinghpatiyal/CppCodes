#include <bits/stdc++.h>
using namespace std;

class Root
{
public:
    int data;
    Root *left;
    Root *right;
};

Root *binaryTree(int data)
{
    Root *new_root = new Root();
    new_root->data = data;
    new_root->right = NULL;
    new_root->left = NULL;
    return new_root;
}

void inorder(Root *root)
{
    if (root == NULL)
    {
        return;
    }
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

int main()
{
    Root *root = NULL;
    root = binaryTree(1);
    root->left = binaryTree(2);
    root->right = binaryTree(3);
    root->right->left = binaryTree(4);
    root->right->right = binaryTree(5);

    inorder(root);
}