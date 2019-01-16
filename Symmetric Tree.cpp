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
    //递归法分别比较左右子树
public:
    bool isSymmetric(TreeNode* root) {
        
        if(!root)
            return true;
        return isSymmetric(root->left,root->right);
    }
    bool isSymmetric(TreeNode* left,TreeNode* right)
    {
        if(left==NULL&&right==NULL)
            return true;
        if(left==NULL&&right!=NULL)
            return false;
        if(left!=NULL&&right==NULL)
            return false;
        if(left->val!=right->val)
            return false;
        return isSymmetric(left->left,right->right) && isSymmetric(left->right,right->left);
            
    }
};