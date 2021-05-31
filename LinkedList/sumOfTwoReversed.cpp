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
    new_node->next = NULL;

    if (*head_ref == NULL)
    {
        *head_ref = new_node;
        return;
    }
    Node *last = *head_ref;
    while (last->next != NULL)
    {
        last = last->next;
    }
    last->next = new_node;
    return;
}

Node *reverse(Node **head_ref)
{
    Node *prev = NULL;
    Node *temp = NULL;
    Node *curr = (*head_ref);
    while (curr != NULL)
    {
        temp = curr->next;
        curr->next = prev;
        prev = curr;
        curr = temp;
    }
    (*head_ref) = prev;
}

int store(Node *node)
{
    int digit = 0;
    while (node != NULL)
    {
        digit = digit * 10 + node->data;
        node = node->next;
    }
    return digit;
}

Node *answerFunc(int data)
{
    int n;
    Node *head = NULL;
    while (data != 0)
    {
        n = data % 10;
        data = data / 10;
        push(&head, n);
    }
    return head;
}

void printList(Node *head_ref)
{
    while (head_ref != NULL)
    {
        cout << head_ref->data << " ";
        head_ref = head_ref->next;
    }
}

int main()
{
    Node *first = NULL;
    Node *second = NULL;

    push(&first, 2);
    push(&first, 4);
    push(&first, 3);
    // push(&first, 3);

    printList(first);
    cout << endl;
    reverse(&first);
    printList(first);
    cout << endl;

    push(&second, 5);
    push(&second, 6);
    push(&second, 4);
    printList(second);
    cout << endl;
    reverse(&second);
    printList(second);
    cout << endl;

    int one = store(first);
    int two = store(second);

    int sum = one + two;
    cout << sum;
    cout << endl;

    Node *third = answerFunc(sum);
    printList(third);
}
