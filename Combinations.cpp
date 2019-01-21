class Solution {
public:

    void dfs(int depth,int maxdepth,vector <int> a,vector<vector<int>> &res,int n,int start)
    {
        if(depth == maxdepth)
        {
            res.push_back(a);
            return ;
        }
        
        int i;
        for(i = start;i <= n;i++)
        {
            a[depth] = i;
            dfs(depth+1,maxdepth,a,res,n,i+1);
        }
    }
    
    vector<vector<int>> combine(int n, int k) {
        
        vector <vector<int>> res;
        vector <int> a;
        /*设置a的大小*/
        a.resize(k);
        //res.clear();
        dfs(0,k,a,res,n,1);
        return res;
        
    }
};

class Solution {
    //递归回溯法
public:
    vector<vector<int>> combine(int n, int k) {
        
        vector<vector<int>> res;
        if(n<k || k<=0 || n<=0)
            return res;
        
        vector<int> p;
        combination(n,k,1,p,res);
        return res;
        
    }
    
    void combination(int n,int k,int index,vector<int>& p,vector<vector<int>>& res)
    {
        if(p.size()==k)
        {
            res.push_back(p);
            return;
        }
        
        for(int i=index; i<=n; i++)
        {
            p.push_back(i);
            combination(n,k,i+1,p,res);
            p.pop_back();
        }
        
        return;
    }
};