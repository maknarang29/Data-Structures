#include <iostream>
#include "Tree.h"
using namespace std;

int height(TreeNode* root){
    if (!root) return 0; //Base Case
    else return max(height(root->left),height(root->right))+1; //The +1 part ios important, it returns the height
}

void printKdist(TreeNode* root, int k){
    if (!root) return;
    if (k==0) cout<<root->data<<" ";
    else {
        printKdist(root->left,k-1);
        printKdist(root->right,k-1);
    }
}

