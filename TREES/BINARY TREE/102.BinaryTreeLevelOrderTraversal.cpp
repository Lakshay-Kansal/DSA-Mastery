//   PROBLEM : BINARY TREE LEVEL ORDER TRAVERSAL 
//   LINK : https://leetcode.com/problems/binary-tree-level-order-traversal
//   DIFFICULTY : MEDIUM
//   APPROACH : QUEUE BFS TRAVERSAL

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
    vector<vector<int>> levelOrder(TreeNode* root) {
      queue<TreeNode*>q;
      vector<vector<int>>ans;
      if(!root) return ans;
      q.push(root);
      while(!q.empty()){
        int size = q.size();
        vector<int>tem;
        for(int i=0;i<size;i++){
        TreeNode* temp = q.front();
        q.pop();
        tem.push_back(temp->val);
        if(temp->left) q.push(temp->left);
        if(temp->right) q.push(temp->right);
        }
        ans.push_back(tem);
      }
      return ans;
    }
};