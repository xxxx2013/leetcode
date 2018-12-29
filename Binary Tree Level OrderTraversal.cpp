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

class Solution {
	
	//采用队列方法
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        
        vector<vector<int>> res;
        if(!root)
            return res;
        
        queue<pair<TreeNode*,int>> que;
        que.push(make_pair(root,0));
        
        while(que.empty()==false)
        {
            TreeNode* t = que.front().first;
            int level = que.front().second;
            que.pop();
            if(level == res.size())
            {
                vector<int> a;
                res.push_back(a);
            }
            res[level].push_back(t->val);
            if(t->left)
            {
                que.push(make_pair(t->left,level+1));
            }
            if(t->right)
            {
                que.push(make_pair(t->right,level+1));
            }
            
        }
        return res;
    }
};