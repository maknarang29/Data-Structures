#include <iostream>
#include "LinkedList.cpp"


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





