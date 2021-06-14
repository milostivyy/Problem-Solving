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
    int kthSmallest(TreeNode* root, int k) {
        stack<TreeNode* >st;
        TreeNode* m=root;
        while(m!=NULL || !st.empty())
        {
            while(m)
            {
                st.push(m);
                m=m->left;
            }
            m=st.top();
            k--;
            if(k==0)
                return m->val;
            st.pop();
            m=m->right;
        }
        return 0;
    }
};