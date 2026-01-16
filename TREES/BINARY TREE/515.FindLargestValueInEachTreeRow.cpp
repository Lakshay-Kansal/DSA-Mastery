//   PROBLEM : FIND LARGEST VALUE IN EACH TREE ROW
//   LINK : https://leetcode.com/problems/find-largest-value-in-each-tree-row
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
    vector<int> largestValues(TreeNode* root) {
        queue<TreeNode*>q;
        vector<int>ans;
        if(!root) return ans;
        q.push(root);
        while(!q.empty()){
            int levelsize = q.size();
            int val = INT_MIN;
            for(int i =0;i<levelsize;i++){
                TreeNode* temp = q.front();
                q.pop();
                val = max(val,temp->val);
                if(temp->left)q.push(temp->left);
                if(temp->right)q.push(temp->right);
            }
            ans.push_back(val);
        }
        return ans;
    }
};