#include <iostream>
#include "LinkedList.h"


//Method to print middle node of Linked List
void printMiddle(Node* head){
    Node* slow = head;
    Node* fast = head;
    if (head!=NULL){
        while(fast!= NULL && fast->next!=NULL){
            slow = slow->next;
            fast = fast->next->next;
        }   
    cout<< " Middle element is ["<< slow->val <<"]"<<endl;
    }

}



void ListSearch(Node* head, int elem){
    Node* val = head;
    while(val->next!= NULL & val->val==elem){
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
        cout<<" "<<node->val; 
        node = node->next; 
    } 
} 


void swap(Node *head){
    if(head->next->next == NULL) return;
    Node* temp = head;
    head->val = head->next->val;
    head->next->val = temp;
    swap(head->next->next);
}
