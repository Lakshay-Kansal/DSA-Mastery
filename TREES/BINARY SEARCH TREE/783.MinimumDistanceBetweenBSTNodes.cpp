//   PROBLEM : MINIMUM DISTANCE BETWEEN BST NODES
//   LINK : https://leetcode.com/problems/minimum-distance-between-bst-nodes
//   DIFFICULTY : EASY
//   APPROACH : INORDER TRAVERSAL THEN COMPARING ADJACENT ELEMENTS 

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
void inorder(TreeNode* root,vector<int>&ans){
    if(root == NULL) return ;
    inorder(root->left,ans);
    ans.push_back(root->val);
    inorder(root->right,ans);
}
    int minDiffInBST(TreeNode* root) {
        if(!root->left && !root->right) return root->val;
        vector<int>ans;
        inorder(root,ans);
        int mini = INT_MAX;
        for(int i =1 ;i<ans.size();i++){
            int diff = ans[i]-ans[i-1];
            mini = abs(min(mini,diff));
        }
        return mini;
    }
};