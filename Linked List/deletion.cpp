#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    Node *next;
    int data;
};

void deleteNode(Node **head, int key)
{
    Node *temp = *head;
    Node *prv = NULL;
    //  Case 1: Deleting the first node.
    if (temp != NULL && temp->data == key)
    {
        *head = temp->next;
        temp = NULL;
        delete temp;
    }
    // Case 2: Deleting node other than first node.
      else
    {
    while (temp != NULL && temp->data != key)
    {
        prv = temp;
        temp = temp->next;
    }
    if(temp == NULL){
        return;
    }
    prv->next = temp->next;
    delete temp; 
    }
}

void display(Node *n)
{
    while (n != NULL)
    {
        cout << n->data << " ";
        n = n->next;
    }
}

void insert(Node **head, int newData)
{
    Node *newNode = new Node();
    newNode->data = newData;
    newNode->next = (*head);
    (*head) = newNode;
}

// void deleteNode(Node **head, int key)
// {
//     Node *temp = *head;
//     Node *prv = NULL;
//     if (temp != NULL && temp->data == key)
//     {
//         *head = temp->next;
//         delete temp;
//         return;
//     }
//     else
//     {
//         while (temp != NULL && temp->data == key)
//         {
//             prv = temp;
//             temp = temp->next;
//             return;
//             delete temp;
//         }
//         if (temp == NULL)
//             return;
//         prv->next = temp->next;
//         delete temp;
//     }
// }

int main()
{
    Node *head = new Node();
    Node *second = new Node();
    Node *third = new Node();
    head->data = 66;
    head->next = second;

    second->data = 96;
    second->next = third;

    third->data = 12;
    third->next = NULL;

    cout << endl
         << "Fresh Linked List:" << endl;
    display(head);
    cout << endl
         << "After Insertion:" << endl;
    insert(&head, 2);
    display(head);
    cout << endl
         << "After Deletion:" << endl;
    deleteNode(&head, 66);
    display(head);

    return 0;
}