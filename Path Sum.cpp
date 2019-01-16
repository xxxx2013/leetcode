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
    ʹ��DFS�㷨�ж�
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

class Solution {
    //�ݹ鷨���
public:
    bool hasPathSum(TreeNode* root, int sum) {
        
        if(root==NULL)
            return false;
        
        if(root->left==NULL && root->right==NULL)
        {
            if(root->val == sum)
                return true;
            else
                return false;
        }
        
        if(hasPathSum(root->left,sum-root->val)==false && hasPathSum(root->right,sum-root->val)==false)
        {
             return false;
        }
           
        return true;
        
        
    }
};