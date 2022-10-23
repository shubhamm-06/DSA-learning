//  Code to insert a node in a linked list.

#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
};

// Function to display liked list.
void display(Node *n)
{
    while (n != NULL)
    {
        cout << n->data << " ";
        n = n->next;
    }
}

//  Function to push new node at head of an existing liked list.
void push(Node **head, int newData)
{
    Node *newNode = new Node();
    newNode->data = newData;
    newNode->next = (*head);
    (*head) = newNode;
}

// Function to insert a new node after given 
void pushAfter(Node* prvHead, int newData)
{
    if(prvHead == NULL)
    {
        cout << "ERROR 9672";
    }
    else{
        Node* newNode = new Node();
        newNode -> data = newData;
        newNode -> next = prvHead->next;
        prvHead -> next = newNode;
    }
}

// Function to append a node at the end of the likend list.
void append(Node** head, int newData)
{
    Node* newNode = new Node();
    Node *last = *head;
    newNode->data = newData;
    newNode -> next = NULL;
    if(*head == NULL)
    {
        *head = newNode;
        return;
    }
    while (last->next != NULL)
    {
        last = last -> next;
    }
    last -> next = newNode;
    return;
    
}

int main()
{
    Node *head = new Node();
    head->data = 12;
    head->next = NULL;

    display(head);
    cout << endl;
    push(&head, 45);
    push(&head, 235);
    display(head);
    cout << endl;
    pushAfter(head->next, 1);
    display(head);
    append(&head, 69);
    cout << endl;
    display(head);

    return 0;
}