class Solution {
public:
    
    void dfs(int index,vector <int> &a,vector<int> nums,vector<vector<int>> &res)
    {
        res.push_back(a);
        int i;
        
        for(i = index;i < nums.size();i++)
        {
            if(i != index && nums[i] == nums[i-1]) continue;
            a.push_back(nums[i]);
            dfs(i+1,a,nums,res);
            a.pop_back();
        }
        
    }
    
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        
        vector <vector<int>> res;
        vector <int> a;
        sort(nums.begin(),nums.end());
        dfs(0,a,nums,res);
        
        return res;
        
    }
};