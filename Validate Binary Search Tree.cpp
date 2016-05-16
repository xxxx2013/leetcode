class Solution {
    /*
    判断是否为二分查找树
    采用中序遍历法
    */
    TreeNode *pre = NULL;
public:
    bool isValidBST(TreeNode* root) {
        
        
        
        if(root != NULL)
        {
            
            
            if(!(isValidBST(root -> left)))
            {
                return false;
            }
            
            if(pre != NULL && root -> val <= pre -> val)
            {
                return false;
            }
            
            pre = root;
            
            return (isValidBST(root -> right));
        }
        
        return true;
        
    }
};