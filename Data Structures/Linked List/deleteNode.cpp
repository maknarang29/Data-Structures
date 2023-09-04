#include <iostream>
#include "LinkedList.h"
using namespace std;


//Delete Node from linked list

void deleteNode(Node** headref, int k ){
    
    //Store the headreference 
    Node* temp = *headref;
    //To keep track of the previous pointer for the node to be deleted
    Node* prev = NULL;


    //If head node itself contains the key 
    if (temp != NULL & temp->val == k){
        //Chenge the pointer direction of headref to that of the next node direction
        *headref = temp->next;
        //delete temp
        delete temp;
        return;
    }
    //Else Search for the key and delete the node
    else{
        //traversing through the linkedlist keeping track of the previous node
        while(temp!=NULL & temp->val ==k){
            prev = temp;
            temp = temp->next;
        }
        //Reaching the end of linked list without finding the value
        if (temp==NULL){
            return;
        }
        //Once the node is found
        prev->next = temp->next;
        delete temp;
    }
}
