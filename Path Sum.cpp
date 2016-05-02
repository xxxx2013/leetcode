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
    Ê¹ÓÃDFSËã·¨ÅÐ¶Ï
    */
public:
    
    bool dfs(TreeNode *node,int sum,int cursum)
    {
        if(node == NULL)
        return false;
        
        if(node -> left == NULL && node -> right == NULL)
        {
            return (cursum + node -> val == sum);
        }
        
        return dfs(node -> left,sum,cursum + node -> val) || dfs(node -> right,sum,cursum + node -> val);
        
    }
    
    bool hasPathSum(TreeNode* root, int sum) {
        

       return dfs(root,sum,0);
        
        
    }
};