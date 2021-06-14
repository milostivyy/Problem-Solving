/*Given the root of a binary tree, return the length of the diameter of the tree.

The diameter of a binary tree is the length of the longest path between any two nodes in a tree. This path may or may not pass through the root.

The length of a path between two nodes is represented by the number of edges between them./**


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
    int diameterOfBinaryTree(TreeNode* root) {
        return diameter(root);
    }
    int height(TreeNode* Node)
    {
        if(Node==NULL)
            return 0;
        return 1+max(height(Node->left),height(Node->right));
        
    }
    int diameter(TreeNode* root)
    {
        if(root==NULL)
            return 0;
        int lheight=height(root->left);
        int rheight=height(root->right);
        int leftdiameter=diameter(root->left);
        int rightdiameter=diameter(root->right);
        return max(lheight+rheight,max(leftdiameter,rightdiameter));
    }
};