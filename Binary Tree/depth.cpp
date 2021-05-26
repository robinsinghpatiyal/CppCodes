#include <bits/stdc++.h>
using namespace std;

class Root
{
public:
    int data;
    Root *left;
    Root *right;
};

Root *binaryTree(int new_data)
{
    Root *temp = new Root();
    temp->data = new_data;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}

void traverse(Root *root)
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

int findDepth(Root *root)
{
    if (root == NULL)
    {
        return 0;
    }

    int left = findDepth(root->left);
    int right = findDepth(root->right);

    if (left > right)
    {
        return left + 1;
    }
    else
    {
        return right + 1;
    }
}

int main()
{
    Root *root = binaryTree(1);
    root->left = binaryTree(2);
    root->right = binaryTree(3);
    root->right->left = binaryTree(4);
    root->right->right = binaryTree(5);
    root->right->right->right = binaryTree(6);
    root->right->right->right->left = binaryTree(8);
    root->right->right->right->right = binaryTree(7);

    traverse(root);

    int depth = findDepth(root);
    cout << endl
         << depth << " ";
}