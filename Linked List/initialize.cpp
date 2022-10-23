#include <bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int data;
    Node* next;
};
void display(Node* n){
    while(n != NULL){
        cout << n->data << " ";
        n = n-> next;
    }
}
int main(){
    Node* head = NULL;
    Node* second = NULL;
    Node* third = NULL;

    head = new Node();
    second = new Node();
    third = new Node();

    head -> data = 12;
    head -> next = second;

    second -> data = 45;
    second -> next = third;

    third -> data = 66;
    third -> next = NULL;

    display(head);
}