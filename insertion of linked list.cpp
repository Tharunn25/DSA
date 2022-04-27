// insertion of linked list
// day 53 out of 100

#include <iostream>
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

    new_node->next = (*head_ref);

    (*head_ref) = new_node;
}

void insert_in_between(Node *prev_node, int new_data)
{

    if (prev_node == NULL)
    {
        cout << "The previous node data can't be null";
        return;
    }

    Node *new_node = new Node();

    new_node->data = new_data;

    new_node->next = prev_node->next;

    prev_node->next = new_node;
}

void atend(Node **head_ref, int new_data)
{

    Node *new_node = new Node();

    Node *last = *head_ref;

    new_node->data = new_data;

    new_node->next = NULL;

    while (*head_ref = NULL)
    {
        *head_ref = new_node;
        return;
    }

    if (last->next != NULL)
    {
        last = last->next;
    }

    last->next = new_node;
    return;
}

void print_linked_list(Node *node)
{
    while (node != NULL)
    {
        cout << " " << node->data;
        node = node->next;
    }
}

int main()
{
    Node *head = NULL;
    atend(&head, 6);

    push(&head, 78);

    push(&head, 34);

    push(&head, 65);

    push(&head, 12);

    atend(&head, 89);

    insert_in_between(head->next, 45);

    cout << "The created linked list is : "
         << " ";
    print_linked_list(head);

    return 0;
}