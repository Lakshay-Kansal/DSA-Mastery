//   PROBLEM : COUNT COMPLETE TREE NODES
//   LINK : https://leetcode.com/problems/count-complete-tree-nodes
//   DIFFICULTY : EASY
//   APPROACH : 2-METHODS 

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:

// TRAVERSAL APPROACH
void size(TreeNode* root,int &count){
    if(root==NULL){
        return ;
    }
    count++;
    size(root->left,count);
    size(root->right,count);
}

// RECURSIVE APPROACH
int size(TreeNode* root){
    if(root==NULL)
    return 0;

    return 1+size(root->left)+size(root->right);
}


int countNodes(TreeNode* root) {
    int count = size(root);
    return count;
    }
};