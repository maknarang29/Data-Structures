#include <iostream>
#include "traversal.cpp"


int main()
{
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->right->left = new TreeNode(4);
    root->right->right = new TreeNode(5);
 
 
      // Function call
    cout << "\nInorder traversal of binary tree is \n";
    printInorder(root);
    cout << "\nPreorder traversal of binary tree is \n";
    printPreorder(root);
    cout << "\nPostorder traversal of binary tree is \n";
    printPostorder(root);
 
 
} 