class Solution {
//等差数列前N项和
public:
    int missingNumber(vector<int>& nums) {
        
        int res = 0;
        int sum = 0;
        int length = nums.size();
        int i;
        for(i=0; i<length; i++)
        {
            sum += nums[i];
        }
        
        res = length*(length+1)/2 - sum;
        return res;
        
    }
};