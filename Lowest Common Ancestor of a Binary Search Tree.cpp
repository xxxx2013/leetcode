/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
    //二分搜索树 采用递归的方法求解最近公共祖先
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        
        if(root==NULL)
            return NULL;
        
        if(p->val<root->val && q->val<root->val)
        {
            return lowestCommonAncestor(root->left,p,q);
        }
        if(p->val>root->val && q->val>root->val)
        {
            return lowestCommonAncestor(root->right,p,q);
        }
        return root;
        
    }
};