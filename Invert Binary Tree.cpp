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
    TreeNode* invertTree(TreeNode* root) {
        
        if(root==NULL)
            return NULL;
        
        invertTree(root->left);
        invertTree(root->right);
        swap(root->left,root->right);
        
        return root;
        
    }
};