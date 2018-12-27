class Solution {
    //滑动窗口方法
public:
    double findMaxAverage(vector<int>& nums, int k) {
        
        if(nums.size()==1)
            return nums[0];
        
        double res_max = -20000;
        double sum = 0;
        for(int i=0; i<k; i++)
        {
            sum += nums[i];
        }
        res_max = sum;
        for(int i=k; i<nums.size(); i++)
        {
            sum += nums[i];
            sum -= nums[i-k];
            res_max = max(res_max,sum);
        }
        
        return res_max/k;
    }
};