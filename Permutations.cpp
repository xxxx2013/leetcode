class Solution {
public:
/*
�������������㷨+������������㷨
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