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
    bool isSymmetric(TreeNode* root) {
        return Symmetric(root,root);
        
    }
    bool Symmetric(TreeNode* N1,TreeNode* N2)
    {
        if(!N1 and !N2)
        {
            return true;
        }
        else
        {
            if(N1 and N2)
            {
                if(N1->val==N2->val)
                {
                    return Symmetric(N1->left,N2->right) && Symmetric(N1->right,N2->left);
                }
            }
        }
        return false;
    }
};