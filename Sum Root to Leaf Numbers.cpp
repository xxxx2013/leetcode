class Solution {
public:

    void Sum(TreeNode *root,int num,int &res)
    {
        num = num*10 + root -> val;
        if(root -> left == NULL && root -> right == NULL)
        {
           res += num;
        }
        
        if(root -> left != nullptr)
        {
            Sum(root -> left ,num , res);
        }
        
        if(root -> right != nullptr)
        {
            Sum(root -> right , num , res);
        }
    }
    int sumNumbers(TreeNode* root) {
        
        if(root == nullptr)
        return 0;
        
        int res = 0;
        Sum(root,0,res);
        return res;
        
        
    }
};