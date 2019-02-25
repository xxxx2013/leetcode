class Solution {
    //动态规划方法求解 LIS(i) = max(1+LIS(j)(if(nums[i]>nums[j])))(i>j)
public:
    int lengthOfLIS(vector<int>& nums) {
        
        if(nums.size()==0)
            return 0;
        
        int n = nums.size();
        vector<int> memo(n,1);
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<i; j++)
            {
                if(nums[i]>nums[j])
                {
                    memo[i] = max(memo[i], 1+memo[j]);
                }
            }
        }
        sort(memo.begin(),memo.end());
        return memo[n-1];
    }
};