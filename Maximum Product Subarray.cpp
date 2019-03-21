class Solution {
    //动态规划DP,两个数组分别维护的当前最大值和当前最小值
public:
    int maxProduct(vector<int>& nums) {
        
        
        vector <int> dp_max(nums.size(),0);
        vector <int> dp_min(nums.size(),0);
        dp_max[0] = nums[0];
        dp_min[0] = nums[0];
        int n = nums.size();
        int max1 = nums[0];
        for(int i=1; i<n; i++)
        {
            dp_max[i] = max(max(dp_max[i-1]*nums[i],dp_min[i-1]*nums[i]),nums[i]);
            dp_min[i] = min(min(dp_max[i-1]*nums[i],dp_min[i-1]*nums[i]),nums[i]);
            max1 = max(dp_max[i],max1);
        }
        return max1;
    }
};