class Solution {
    /*
     π”√DFSÀ„∑®
    */
public:
    
    void dfs(int dep,int maxdep,vector<int> a,vector<vector<int>> &res,vector <int> &nums,int start)
    {
        res.push_back(a);
        
        if(dep == maxdep)
        return;
        
        int i;
        for(i = start;i<nums.size();i++)
        {
            vector <int> b(a);
            b.push_back(nums[i]);
            dfs(dep+1,maxdep,b,res,nums,i+1);
        }
    }
    
    vector<vector<int>> subsets(vector<int>& nums) {
        
        sort(nums.begin(),nums.end());
        vector <vector<int>> res;
        vector <int> a;
        dfs(0,nums.size(),a,res,nums,0);
        return res;
        
    }
};