class Solution {
    //动态规划方法
public:
    bool canPartition(vector<int>& nums) {
        
        int sum = 0;
        for(int i=0; i<nums.size(); i++)
        {
            sum += nums[i];
        }
        
        
        int n = nums.size();
        if(sum%2 != 0)
            return false;
        int c = sum/2;
        vector<bool> memo(c+1,false);
        for(int i=0; i<=c; i++)
        {
            memo[i] = (nums[0]==i);
        }
        for(int i=1; i<n; i++)
        {
            for(int j=c; j>=nums[i]; j--)
            {
                memo[j] = memo[j] || memo[j-nums[i]];
            }
        }
        
        return memo[c];
    }
};