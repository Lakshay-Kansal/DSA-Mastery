//   PROBLEM : BALANCED BINARY TREE
//   LINK : https://leetcode.com/problems/balanced-binary-tree
//   DIFFICULTY : EASY
//   APPROACH : CALCULATING HEIGHT(LEFT,RIGHT) AND CHECK FOR BALANCE 

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
 int maxDepth(TreeNode* root, int &valid) {
        if(root==NULL)
        return 0;
        int l = maxDepth(root->left,valid);
        int r = maxDepth(root->right,valid);
        if(abs(l-r)>1) valid = 0;
        return 1+max(l,r);
    }
    bool isBalanced(TreeNode* root) {
        int valid = 1;
        maxDepth(root,valid);
        return valid;
    }
};