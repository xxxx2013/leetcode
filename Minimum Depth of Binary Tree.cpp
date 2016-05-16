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
    /*
    采用递归的思想,分别比较左右子树的最小值
    */
public:
    int minDepth(TreeNode* root) {
        
        int num = 0;
        if(root == nullptr)
        return 0;
        
        else if (root -> left == nullptr)
        {
            return minDepth(root -> right) + 1;
        }
        else if (root -> right == nullptr)
        {
            return minDepth(root -> left) + 1;
        }
        
        else return min(minDepth(root -> left),minDepth(root -> right)) + 1;
        
    }
};