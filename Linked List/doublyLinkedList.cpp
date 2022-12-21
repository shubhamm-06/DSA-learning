#include <bits/stdc++.h>
using namespace std;
class Node
{
    public:
    Node* prev;
    int data;
    Node* next;
    Node(int d)
    {
        this -> data = d;
        this -> prev = NULL;
        this -> next = NULL;
    }
};
void display(Node* n){
    while(n != NULL){
        cout << n->data << " ";
        n = n->next; 
    }
}
int main()
{
    Node* head = new Node(23);
    Node* second = new Node(12);
    Node* third = new Node(123);
    head->next = second;
    second->prev = head;
    second->next = third;
    third->prev = second;
    
    display(head);
    return 0;
}