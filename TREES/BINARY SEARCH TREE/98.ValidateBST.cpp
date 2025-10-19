//   PROBLEM : VALIDATE BINARY SEARCH TREE
//   LINK : https://leetcode.com/problems/validate-binary-search-tree
//   DIFFICULTY : MEDIUM
//   APPROACH : STORING INORDER TRAVERSAL AND THEN CHECK IF SORTED OR NOT  


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
    if(root==NULL)return ;
    inorder(root->left,ans);
    ans.push_back(root->val);
    inorder(root->right,ans);
}
    bool isValidBST(TreeNode* root) {
        vector<int>ans;
        inorder(root,ans);
        // ASCENDING-ORDER CHECKING
        for(int i =1 ; i<ans.size();i++){
            if(ans[i]<=ans[i-1])
            return false;
        }
        return true;
        
    }
};