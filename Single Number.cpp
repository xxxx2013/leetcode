class Solution {
    /*
    采用位运算，时间复杂度为O(n)
    */
public:
    int singleNumber(vector<int>& nums) {
        
        if(nums.size() == 0)
        return 0;
        
        int res = nums[0];
        int i;
        for(i = 1;i < nums.size();i++)
        {
            res = res ^ nums[i];
        }
        return res;
        
    }
};