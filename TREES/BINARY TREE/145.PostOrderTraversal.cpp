//   PROBLEM : BINARY TREE POSTORDER TRAVERSAL
//   LINK : https://leetcode.com/problems/binary-tree-postorder-traversal
//   DIFFICULTY : EASY
//   APPROACH : SIMPLE POSTORDER TRAVERSAL & STORING ELEMENTS IN VECTOR

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
void post(TreeNode* root ,vector<int>&ans){
    if(root==NULL) return ;
    post(root->left,ans);
    post(root->right,ans);
    ans.push_back(root->val);
}
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int>ans;
        post(root,ans);
        return ans;
    }
};