//   PROBLEM : DELETE NODE IN A BST
//   LINK : https://leetcode.com/problems/delete-node-in-a-bst
//   DIFFICULTY : MEDIUM
//   APPROACH : DELETION OF NODE ALL CASES


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
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(root==NULL) return NULL; //BASE-CASE
        if(root->val < key){        // ELEMENT ON RIGHT-SIDE
            root->right=deleteNode(root->right, key);
            return root;
        }else if(root->val > key){       // ELEMENT ON LEFT-SIDE
            root->left=deleteNode(root->left, key);
            return root;
        }
        // ELEMENT FOUND
        else{  
            // LEAF-NODE DELETION
            if(root->right==NULL && root->left == NULL){
                delete root; 
                return NULL;
            }
            // 1-CHILD NODE DELETION
            else if(root->right==NULL){  // LEFT EXISTS
                TreeNode* temp = root->left;
                delete root;
                return temp;
            }else if(root->left==NULL){  // RIGHT EXISTS
                TreeNode* temp = root->right;
                delete root;
                return temp;
        }
        // 2-CHILD NODE DELETION
        else {  
            TreeNode*child=root->left;
            TreeNode* parent = root;
            while(child->right){  // GREATEST ELEMENT ON LEFT SIDE 
                parent = child;
                child = child->right;
            }
            if(root != parent){
                parent->right=child->left;
                child->left=root->left;
                child->right=root->right;
                delete root;
                return child;
            }else{
                child->right=root->right;
                delete root;
                return child;
            }
        }
        }
        return root;
    }
};