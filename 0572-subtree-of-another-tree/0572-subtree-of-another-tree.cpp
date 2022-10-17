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
    bool checkfunc(TreeNode* root,TreeNode* subRoot){
        if(root==NULL){
           return subRoot==NULL;
        }
        if(subRoot==NULL){
          return root==NULL;
        }
        if(root->val == subRoot->val){
            return checkfunc(root->left,subRoot->left) && checkfunc(root->right,subRoot->right);
        }
        return false;
        
    }
    public:
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(root==NULL){
            return subRoot==NULL;
        }
        if(root->val==subRoot->val){
             if(checkfunc(root,subRoot)) return true;
        }
          return (isSubtree(root->left,subRoot) ||isSubtree(root->right,subRoot));
        
       
        
    }
};