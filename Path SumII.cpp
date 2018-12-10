class Solution {
public:

    void dfs(TreeNode *node,int sum,int cursum,vector<int> a,vector<vector<int>> & res)
    {
        if(node == NULL)
        return;
        
        if(node -> left == NULL && node -> right == NULL)
        {
            if(cursum + node -> val == sum)
            {
                a.push_back(node -> val);
                res.push_back(a);
            }
            return;
        }
        
        a.push_back(node -> val);
        dfs(node -> left,sum,cursum + node -> val,a,res);
        dfs(node -> right,sum,cursum + node -> val,a,res);
    }

    vector<vector<int>> pathSum(TreeNode* root, int sum) {
        
        vector <vector<int>> res;
        res.clear();
        
        vector<int> a;
        a.clear();
        dfs(root,sum,0,a,res);
        
        return res;
    }
};