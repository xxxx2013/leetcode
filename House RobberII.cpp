class Solution {
    //动态规划分别求解[0...n-2]和[1...n-1]的最大值然后比较两者的最大值
public:
    int rob(vector<int>& nums) {
        
        if(nums.size()==0)
            return 0;
        if(nums.size()==1)
            return nums[0];
        if(nums.size()==2)
            return nums[0]>=nums[1]?nums[0]:nums[1];
        int n = nums.size();
        return max(robber(nums,0,n-2),robber(nums,1,n-1));
    }
    
    int robber(vector<int>& nums, int start, int end)
    {
        int n = nums.size();
        vector<int> memo(n,-1);
        memo[start] = nums[start];
        for(int i=start+1; i<=end; i++)
        {
            memo[i] = max(memo[i-1],nums[i]+(i-2>=start?memo[i-2]:0));
        }
        return memo[end];
    }
    
};