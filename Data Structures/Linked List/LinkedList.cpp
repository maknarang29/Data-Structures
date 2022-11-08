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
1. Check if previous node is NULL
2. Create new node
3. Assign data to new node
4. Make next of new node as next of previous node
5. Make next of previous node as new node
*/
void addAfter(Node* prevnode, int newData){
    //Check if previous node is NULL
    if (prevnode == NULL){
        cout<<"PREVIOUS NODE IS NULL";
        return;
    }
    //Create new node
    Node* newNode = new Node();

    //Assign data
    newNode->data = newData;

    //next of new node is made into next of previous node
    newNode->next = prevnode->next;

    //next of prev node is new data node
    prevnode->next = newNode;
}


/*
Given a reference (pointer to a pointer)
to head of a list and newData int
append new node at the end
*/

void append(Node** headref, int newdata){
    //Create new node, assign data and next  
    Node* newNode = new Node();
    newNode->data = newdata;
    newNode->next = NULL;
    
    //If an empty linked list
    if (*headref == NULL){
        *headref = newNode;
        return;
    }
    
    //traverse the linked list and add the node at the end
    Node* last = *headref;
    while(last->next!=NULL){
        last = last->next;
    }
    last->next=newNode;
    
}


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


void printList(Node *node) 
{ 
    while (node != NULL) 
    { 
        cout<<" "<<node->data; 
        node = node->next; 
    } 
} 


//Linked List with three nodes
int main(){
    //Creating three nodes 
    // Node* head = new Node();
    // Node* second = new Node(); 
    // Node* third = new Node(); 

    // head->data = 1;
    // head->next = second;
    // second->data = 2;
    // second->next = third;
    // third->data = 3;
    // third->next = NULL;
    // printMiddle(head);


    Node* head = NULL; 
      
    // Insert 6. So linked list becomes 6->NULL 
    append(&head, 6); 
      
    // Insert 7 at the beginning. 
    // So linked list becomes 7->6->NULL 
    push(&head, 7); 
      
    // Insert 1 at the beginning. 
    // So linked list becomes 1->7->6->NULL 
    push(&head, 1); 
      
    // Insert 4 at the end. So 
    // linked list becomes 1->7->6->4->NULL 
    append(&head, 4); 
      
    // Insert 8, after 7. So linked 
    // list becomes 1->7->8->6->4->NULL 
    addAfter(head->next, 8); 
      
    cout<<"Created Linked list is: "; 
    printList(head); 
      
    return 0; 
    return 0;
}

