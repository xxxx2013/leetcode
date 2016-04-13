class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        int size = nums.size();
        int sum = nums[0];
        int maxSum = nums[0];
        int i;
        for(i = 1;i < size;i++)
        {
            if(sum < 0)
            sum = 0;
            
            sum = sum +nums[i];
            
            maxSum = max(sum,maxSum);
        }
        return maxSum;
    }
};