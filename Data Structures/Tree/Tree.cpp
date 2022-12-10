#include <iostream>
using namespace std;

// struct node{
//   int data;
//   struct node* left;
//   struct node* right;
// };


// class Node {
//     public:
//     int data;
//     Node *left;
//     Node *right;

//     Node (int val){
//         data = val;
//         left = NULL;
//         right = NULL;         
//     }
// };
class Node {
public:
    int data;
    Node* left;
    Node* right;
    // Val is the key or the value that
    // has to be added to the data part
S
    Node (int val)
    {
        data = val;
        // Left and right child for node
        // will be initialized to null
        left = NULL;
        right = NULL;
    }

};