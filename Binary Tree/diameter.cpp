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
    Root *new_root = new Root();
    new_root->data = new_data;
    new_root->left = NULL;
    new_root->right = NULL;

    return new_root;
}

int height(Root *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int left = height(root->left);
    int right = height(root->right);

    return (max(left, right) + 1);
}

int diameter(Root *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int leftHeight = height(root->left);
    int rightHeight = height(root->right);
    int sumOfHeight = leftHeight + rightHeight + 1;
    int leftDia = diameter(root->left);
    int rightDia = diameter(root->right);
    return (max(sumOfHeight, max(leftDia, rightDia)));
}

void parse(Root *root)
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

int main()
{
    Root *root = binaryTree(1);
    root->left = binaryTree(2);
    root->right = binaryTree(3);
    root->left->left = binaryTree(4);
    root->left->right = binaryTree(5);
    root->right->left = binaryTree(6);
    root->right->right = binaryTree(7);

    parse(root);
    cout << endl
         << "The height is :" << endl;
    cout << height(root);
    cout << endl
         << "The diameter is :" << endl;
    cout << diameter(root);
}
