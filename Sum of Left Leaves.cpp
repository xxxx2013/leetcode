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
    //递归法求左叶子节点的和
public:
    int sumOfLeftLeaves(TreeNode* root) {
        
        
        if(root==NULL)
            return 0;
        int res = 0;
        if(root->left!=NULL && root->left->left==NULL && root->left->right==NULL)
        {
            res += root->left->val; 
           //return root->left->val; 
        }
        
        res += sumOfLeftLeaves(root->left);
        res += sumOfLeftLeaves(root->right);
        
        return res;
        
    }
};