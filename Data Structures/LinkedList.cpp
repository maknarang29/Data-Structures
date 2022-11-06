#include <iostream>
using namespace std;



//Construction of a basic linked list data structure
class Node{
    public:
    int data;
    Node* next;
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


//Method to insert a new node in the beginning of the linked list
/*
Given the reference (pointer to pointer of the head of the linked list
and the new element, the method will push the new element on top of the 
list like a stack 
*/

void push(Node** headRef, int newdata){
    //create a new node
    Node* newNode = new Node();
    //Assigne data to the new node
    newNode->data = newdata;
    //assign the pointer of new node to pointer of the head of the linkedlist 
    newNode->next = (*headRef);
    //Move head to point to the new node
    (*headRef) = newNode;
}
//Method to instert a new node after a given node
/*
1.
*/

//Method to print middle node of Linked List
void printMiddle(Node* head){
    Node* slow = head;
    Node* fast = head;
    if (head!=NULL){
        while(fast!= NULL && fast->next!=NULL){
            slow = slow->next;
            fast = fast->next->next;
        }   
    cout<< "Middle element is ["<< slow->data <<"]"<<endl;
    }

}


//Linked List with three nodes
int main(){
    //Creating three nodes 
    Node* head = new Node();
    Node* second = new Node(); 
    Node* third = new Node(); 

    head->data = 1;
    head->next = second;
    second->data = 2;
    second->next = third;
    third->data = 3;
    third->next = NULL;
    printMiddle(head);
    return 0;
}

