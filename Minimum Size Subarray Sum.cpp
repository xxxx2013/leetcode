class Solution {
public:
    int minSubArrayLen(int s, vector<int>& nums) {
        
        int size = nums.size();
        int l = 0;
        int r = -1;
        int sum = 0;
        int res = nums.size() + 1;
        
        while(l<size)
        {
            if(sum < s && r<size-1)
            {
                r++;
                sum += nums[r];
            }
            else
            {
                sum -= nums[l++];
                
            }
            
            if(sum>=s)
            {
                res = min(res,r-l+1);
            }
            
        }
        if(res==size+1)
            return 0;
        return res;
    }
};