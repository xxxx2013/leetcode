class Solution {
    //递归回溯方法求解
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        
        vector<vector<int>> res;
        vector<int> p;
        dfs(res,nums,p,0);
        return res;
        
    }
    
    void dfs(vector<vector<int>>& res, vector<int>& nums, vector<int>& p, int index)
    {
        
        if(index==nums.size())
        {
            res.push_back(p);
            return;
        }
        
        res.push_back(p);
        for(int i=index; i<nums.size(); i++)
        {
            p.push_back(nums[i]);
            dfs(res,nums,p,i+1);
            p.pop_back();
        }
        return;
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