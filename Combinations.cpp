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