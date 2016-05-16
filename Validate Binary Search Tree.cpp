class Solution {
    /*
    �ж��Ƿ�Ϊ���ֲ�����
    �������������
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