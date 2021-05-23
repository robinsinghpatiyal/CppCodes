#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

void append(Node **head_ref, int new_data)
{
    Node *new_node = new Node();
    new_node->data = new_data;
    new_node->next = NULL;

    Node *ptr = (*head_ref);

    if ((*head_ref) == NULL)
    {
        (*head_ref) = new_node;
        return;
    }

    while (ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    ptr->next = new_node;
}

Node *reverseGroup(Node *head_ref, int n)
{
    Node *current = head_ref;
    Node *prev = NULL;
    Node *next = NULL;
    int count = 0;
    while (current != NULL && count < n)
    {
        next = current->next;
        current->next = prev;

        prev = current;
        current = next;
        count++;
    }

    if (next != NULL)
    {
        Node *remaining_list = reverseGroup(next, n);
        head_ref->next = remaining_list;
    }
    return prev;
}

void printList(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
}

int main()
{
    Node *head = NULL;
    append(&head, 1);
    append(&head, 2);
    append(&head, 3);
    append(&head, 4);
    append(&head, 5);
    append(&head, 6);

    printList(head);

    int n = 2;
    cout << endl
         << endl;

    head = reverseGroup(head, n);

    printList(head);
}