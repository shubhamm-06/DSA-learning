// Code to initialize a linked list and print it.

#include <iostream>
using namespace std;


class Node
{
public:
    int data;
    Node *next;
};

void printList(Node *n)
{
    while(n != NULL)
        cout << n->data << " ";
        n = n->next;
}

int main()
{
    Node *head = NULL;
    Node *second = NULL;
    Node *third = NULL;

    head = new Node();
    second = new Node();
    third = new Node();

    head->data = 1;
    head->next = second;

    second->data = 3;
    second->next = third;

    third->data = 5;
    third->next = NULL;

    printList(head);
    return 0;
}