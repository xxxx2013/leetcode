class Solution {
    /*
    使用DFS算法
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


class Solution {
    //非递归算法求解
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        
        vector<vector<int>> res(1);
        if(nums.size()==0)
            return res;
        
        sort(nums.begin(),nums.end());
        
        for(int i=0; i<nums.size(); i++)
        {
            //res.push_back(nums[i]);
            int size = res.size();
            for(int j=0; j<size; j++)
            {
                res.push_back(res[j]);
                res.back().push_back(nums[i]);
            }
        }
        return res;
    }
    
};