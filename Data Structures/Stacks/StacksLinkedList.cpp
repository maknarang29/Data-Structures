#include <iostream>
using namespace std;

//Stack using Linked Lists


//Create Node Class
class Node{
    public:
    int data;
    Node* next;
};

//Implement a linked List
Node* newNode(int newdata){
    Node* stackNode = new Node();
    stackNode->data = newdata;
    stackNode->next = NULL;
    return stackNode;
}
//Check if stack is empty
int isEmpty(Node* root){
    return !root;
}

//Push method like insert a node in a linked list
void push(Node** headref, int data){
    //create a new node
    Node* stackNode = newNode(data);
    //assign next of newNode to headref (pointer) place it was already pointing to
    stackNode->next = *headref;
    //assign headref to the newnode
    *headref = newnode;
}




int main(){
    return 0;
}