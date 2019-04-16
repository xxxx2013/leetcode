class Solution {
    // 对数组排序sort
public:
    int longestConsecutive(vector<int>& nums) {
        
        
        if(nums.size()<=1)
            return nums.size();
        
        sort(nums.begin(), nums.end());
        
        int rec = 1;
        int res_max = 1;
        
        for(int i=0; i<nums.size()-1; i++)
        {
            if(nums[i+1]-nums[i]==1)
            {
                rec = rec + 1;
            }
            else if(nums[i+1]==nums[i])
            {
                continue;
            }
            else
            {
                rec = 1;
            }
            
            res_max = max(res_max,rec);
        }
        
        return res_max;
    }
};