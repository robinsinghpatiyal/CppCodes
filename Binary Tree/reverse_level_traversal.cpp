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

void reverseTraversal(Root *root)
{
    if (root == NULL)
    {
        return;
    }
    queue<Root *> que;
    stack<int> stk;
    que.push(root);
    while (que.empty() != true)
    {
        Root *temp = que.front();
        //  cout << temp->data << " ";
        stk.push(temp->data);
        que.pop();
        if (temp->right != NULL)
        {
            que.push(temp->right);
        }

        if (temp->left != NULL)
        {

            que.push(temp->left);
        }
    }
    while (stk.empty() == false)
    {
        int temp = stk.top();
        cout << temp << " ";
        stk.pop();
    }
}

int main()
{
    Root *root = binaryTree(1);
    root->left = binaryTree(2);
    root->right = binaryTree(3);
    root->right->left = binaryTree(4);
    root->right->right = binaryTree(5);

    reverseTraversal(root);
}