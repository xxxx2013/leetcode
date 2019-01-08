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
    //递归法求二叉树深度和判断左右子树的深度差是否大于1
public:
    bool isBalanced(TreeNode* root) {
        
        if(root==NULL)
            return true;
        
        if(abs(getDepth(root->left) - getDepth(root->right)) > 1) 
            return false;
        else
            return isBalanced(root->left) && isBalanced(root->right);
        
        
    }
    int getDepth(TreeNode* root)
    {
        if(root==NULL)
            return 0;
        return max(getDepth(root->right),getDepth(root->left)) + 1;
    }
    
};