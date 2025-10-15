//   PROBLEM : MAXIMUM DEPTH OF BINARY TREE
//   LINK : https://leetcode.com/problems/maximum-depth-of-binary-tree
//   DIFFICULTY : EASY
//   APPROACH : RECURSIVELY ASKING FOR MAX DEPTH (LEFT SIDE AND RIGHT SIDE) 

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
    int maxDepth(TreeNode* root) {
        if(root==NULL)
        return 0;
        
        return 1+max(maxDepth(root->left),maxDepth(root->right));
    }
};