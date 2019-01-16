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
    //递归法分别求解包括根节点和不包括根节点的情况
public:
    int pathSum(TreeNode* root, int sum) {
        
        if(!root)
            return 0;
        
        int res = 0;
        
        
        res += pathsum(root,sum);
        res += pathSum(root->left,sum);
        res += pathSum(root->right,sum);

        return res;
    }
    
    int pathsum(TreeNode* root,int sum)
    {
        if(!root)
            return 0;
        int res = 0;
        if(root->val==sum)
            res+=1;
        res += pathsum(root->left,sum-root->val);
        res += pathsum(root->right,sum-root->val);
        return res;
        
    }
};