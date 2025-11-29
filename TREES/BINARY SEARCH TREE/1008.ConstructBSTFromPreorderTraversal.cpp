//   PROBLEM : CONSTRUCT BINARY SEARCH TREE FROM PREORDER TRAVERSAL 
//   LINK : https://leetcode.com/problems/construct-binary-search-tree-from-preorder-traversal
//   DIFFICULTY : MEDIUM
//   APPROACH : EVERY NODE LIE BETWEEN LOWER-BOUND AND UPPER-BOUND

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
TreeNode* BSTtree(vector<int>& preorder,int &index , int lower , int upper){
    if(index==preorder.size() || lower>preorder[index] || upper<preorder[index]) return NULL;
    TreeNode* root = new TreeNode(preorder[index++]);
    root->left = BSTtree(preorder,index,lower,root->val);
    root->right = BSTtree(preorder,index,root->val,upper);
        
    return root;
}
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        int index  = 0;
        return BSTtree(preorder,index,INT_MIN,INT_MAX);
    }
};