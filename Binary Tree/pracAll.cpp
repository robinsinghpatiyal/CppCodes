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
    Root *root = new Root();
    root->data = data;
    root->left = NULL;
    root->right = NULL;
    return root;
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

int height(Root *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int left = height(root->left) + 1;
    int right = height(root->right) + 1;

    return max(left, right);
}

int diameter(Root *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int left = height(root->left);
    int right = height(root->right);

    return left + right + 1;
}

void preOrder(Root *root)
{
    if (root == NULL)
    {
        return;
    }
    queue<Root *> q;
    q.push(root);
    while (!q.empty())
    {
        Root *temp = q.front();
        q.pop();
        cout << temp->data << " ";
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

void leftView(Root *root, int level, int *max_level)
{
    if (root == NULL)
    {
        return;
    }
    if (level > *max_level)
    {
        cout << root->data << " ";
        *max_level = level;
    }
    leftView(root->left, level + 1, max_level);
    leftView(root->right, level + 1, max_level);
}

void leftV(struct Root *root)
{
    int max_level = 0;
    leftView(root, 1, &max_level);
}

int main()
{
    Root *root = binaryTree(1);
    root->left = binaryTree(2);
    root->right = binaryTree(3);
    root->left->left = binaryTree(4);
    root->left->right = binaryTree(5);
    root->left->left->left = binaryTree(6);
    preOrder(root);
    cout << endl;
    inorder(root);
    cout << endl;
    cout << height(root);
    cout << endl;
    cout << diameter(root);
    cout << endl;
    leftV(root);
}