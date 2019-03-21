class Solution {
    //排序法
public:
    int maximumProduct(vector<int>& nums) {
        
        sort(nums.begin(),nums.end());
        int n = nums.size();
        assert(n>=3);
        
        if(nums[n-1]<=0)
        {
            return nums[n-1]*nums[n-2]*nums[n-3];
        }
        else 
        {
            int res_max = 0;
            res_max = max(res_max,nums[0]*nums[1]*nums[n-1]);
            res_max = max(res_max,nums[n-1]*nums[n-2]*nums[n-3]);
            res_max = max(res_max,nums[0]*nums[n-1]*nums[n-2]);
             return res_max;
        }
       
    }
};