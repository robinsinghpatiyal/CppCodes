#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

void push(Node **head_ref, int new_data)
{

    Node *new_node = new Node();
    new_node->data = new_data;

    if (*head_ref == NULL)
    {
        new_node->next = NULL;
        *head_ref = new_node;
    }
    else
    {
        new_node->next = (*head_ref);
        (*head_ref) = new_node;
    }
}

void reverse(Node **head_ref)
{
    Node *temp = NULL;
    Node *prev = NULL;
    Node *current = (*head_ref);
    while (current != NULL)
    {
        temp = current->next;
        current->next = prev;
        prev = current;
        current = temp;
    }
    (*head_ref) = prev;
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
    push(&head, 1);
    push(&head, 2);
    push(&head, 3);
    push(&head, 4);

    printList(head);
    cout << endl
         << endl;

    reverse(&head);

    printList(head);

    return 0;
}
