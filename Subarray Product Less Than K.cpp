class Solution {
    //滑动窗口[l...r]解决
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        
        if(k <= 1)
            return 0;
        
        int l = 0;
        int r ;
        int res = 0;
        
        unsigned long product = 1;
        for(r=0; r<nums.size(); r++)
        {
            product = product * nums[r];
            while(product>=k)
            {
                product = product / nums[l];
                l++;
            }
            res = res + (r - l + 1);
        }
        return res;
        
        
    }

};