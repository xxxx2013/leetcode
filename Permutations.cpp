class Solution {
public:
/*
遍历排列树的算法+深度优先搜索算法
*/
    
    void dfs(vector<vector<int> >& res, vector<int>& nums, int cur)
    {
        if(nums.size() == cur)
        {
            res.push_back(nums);
        }
        else
        {
            int i;
            for(i = cur;i < nums.size();i++)
            {
                swap(nums[cur],nums[i]);
                dfs(res,nums,cur + 1);
                swap(nums[cur],nums[i]);
            }
        }
    } 
    
    vector<vector<int>> permute(vector<int>& nums) {
        
        int length = nums.size();
        vector<vector<int>> res;
        dfs(res,nums,0);
        return res;

        
        
    }
};

class Solution {
    //递归回溯法求解
public:
    vector<vector<int>> permute(vector<int>& nums) {
        
        vector<vector<int>> res;
        
        if(nums.size()==0)
            return res;
        
        vector<int> p;
        used.reserve(nums.size());
        for(int i=0; i<nums.size(); i++)
        {
            used.push_back(false);
        }
        permutation(nums,0,p,res);
        return res;
    }
    
    void permutation(vector<int>& nums, int index, vector<int>& p, vector<vector<int>>& res)
    {
        if(index==nums.size())
        {
            res.push_back(p);
            return;
        }
        
        for(int i=0; i<nums.size(); i++)
        {
            if(used[i]==false)
            {
                p.push_back(nums[i]);
                used[i] = true;
                permutation(nums,index+1,p,res);
                used[i] = false;
                p.pop_back();
            }
            
            
        }
        
    }
    
private:
    vector<bool> used;
};