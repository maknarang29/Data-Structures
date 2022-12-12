#include <iostream
#include "Tree.cpp"
using namespace std;



/*
Inorder Traversal
1. Traverse the left subtree i.e call Inorder(left->subtree)
2. Visit Root
3. Traverse the right subtree i.e call Inorder(right->subtree)

Inorder [Left Root right]
Time Complexity O(n)
Auxillary Space O(H+1)
*/

void printInorder(TreeNode* node){
    if (!node) return;
    printInorder(node->left);
    cout<<node->data<<" ";  
    printInorder(node->right);
}


/*
Preorder Traversal
1. Visit the root
2. Traverse the left subtree i.e. call preorder(left->subtree) 
3. Traverse the right subtree i.e. call preorder(right->subtree) 

Preorder [Root Left Right]
Time Complexity O(n)
Auxillary Space O(H)
*/
void printPreorder( TreeNode* node){
    if (!node) return;
    cout<<node->data<<" ";
    printPreorder(node->left);
    printPreorder(node->right);
}

/*
Postorder Traversal
1. Traverse the left subtree i.e. call preorder(left->subtree) 
2. Traverse the right subtree i.e. call preorder(right->subtree) 
3. Visit the root
Postorder [Root Left Right]
Time Complexity θ(n)
Auxillary Space θ(H)
*/

void printPostorder(TreeNode* node){
    if (!node) return;
    printPreorder(node->left);
    printPreorder(node->right);
    cout<<node->data<<" ";
}