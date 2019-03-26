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
    string tree2str(TreeNode* t) {
        
        string res;
        if(t==NULL)
            return "";
        if(t->left==NULL && t->right==NULL)
        {
            return to_string(t->val) + "";
        }
        if(t->right==NULL && t->left!=NULL)
        {
            return to_string(t->val) + "(" + tree2str(t->left) + ")";
        }
        // if(t->left==NULL && t->right!=NULL)
        // {
        //     return to_string(t->val) + "()" + tree2str(t->right);
        // }
        return to_string(t->val) + "(" + tree2str(t->left) + ")(" + tree2str(t->right) + ")";
        
    }
};