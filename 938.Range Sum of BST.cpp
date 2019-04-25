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
public:
    int rangeSumBST(TreeNode* root, int L, int R) {
        
        long sum = 0;
        
        if(root==NULL)
            return sum;
        
        if(root->val>=L && root->val<=R)
        {
            sum += root->val;
        }
        
        sum += rangeSumBST(root->left,L,R);
        sum += rangeSumBST(root->right,L,R);
        
        return sum;
        
        
    }
};