#include <iostream>
#include "Tree.cpp"
using namespace std;



/*
Inorder Traversal
1. Traverse the left subtreei.e call Inorder(left->subtree)
2. Visit Root
3. Traverse the right subtreei.e call Inorder(right->subtree)
*/

void printInorder(Node* node){
    if (!node) return;
    printInorder(node->left);
    cout<<node->data<<" ";  
    printInorder(node->right);
}
