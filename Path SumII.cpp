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

class Solution {
    //回溯法求解
public:
    vector<vector<int>> pathSum(TreeNode* root, int sum) {
        
        vector<vector<int>> res;
        if(root==NULL)
            return res;
        
        vector<int> p;
        
        pathsum(root,sum,p,res);
        return res;
    }
    
    void pathsum(TreeNode* root,int sum,vector<int>& p,vector<vector<int>>& res)
    {
        
        if(root==NULL)
            return;
        
        if(root->left==NULL && root->right==NULL)
        {
            if(sum == root->val)
            {
                p.push_back(root->val);
                res.push_back(p);
                p.pop_back();
            }
            return;
        }
        p.push_back(root->val);
        pathsum(root->left,sum-root->val,p,res);
        pathsum(root->right,sum-root->val,p,res);
        p.pop_back();
        
    }
};