#include <iostream>
using namespace std;



//Construction of a basic linked list data structure
class Node{
    public:
    int data;
    Node* next;
};

void ListSearch(Node* head, int elem){
    Node* val = head;
    while(val->next!= NULL & val->data==elem){
        val = val->next;
    }
    return;
};

//Method to get length of a linked List
int getLen(Node* head){
    int len = 1;
    Node* temp = head;
    if (head!=NULL){
    while(temp->next!=NULL){
        len++;
        temp = temp->next;
        }
        return len;
    }
    else {
        return 0;
    }
    
}

void printList(Node *node) 
{ 
    while (node != NULL) 
    { 
        cout<<" "<<node->data; 
        node = node->next; 
    } 
} 