class Solution {
public:
    void dfs(vector <vector<int>> &res,TreeNode *root,int depth)
    {  
        if(root == NULL)
        return;
        
        if(depth < res.size())
        {
            res[depth].push_back(root -> val);
        }
        
        else
        {
            vector <int> a;
            a.push_back(root -> val);
            res.push_back(a);
        }
        
        dfs(res,root->left,depth+1);
        dfs(res,root->right,depth+1);
        
    }
    vector<vector<int>> levelOrder(TreeNode* root) {
        
        vector <vector<int>> res;
        dfs(res,root,0);
        return res;
        
    }
};