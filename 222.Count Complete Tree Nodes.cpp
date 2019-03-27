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
    //递归法
public:
    int countNodes(TreeNode* root) {
        
        if(root==NULL)
            return 0;
        
        if(root->left!=NULL && root->right!=NULL)
        {
            return countNodes(root->left) + countNodes(root->right) + 1;
        }
        
        if(root->left!=NULL && root->right==NULL)
        {
            return countNodes(root->left) + 1;
        }
        if(root->left==NULL && root->right!=NULL)
        {
            return countNodes(root->right) + 1;
        }
        
        return 1;
        
    }
};