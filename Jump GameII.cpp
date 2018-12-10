class Solution {
public:
    int jump(vector<int>& nums) {
        
        int size = nums.size();
        
        if(size == 1 || size == 0)
        return 0;
        
        int i;
        int ccur = 0;
        int res = 0;
        int cmax = 0;
        
        for(i = 0;i<size;i++)
        {   
            if(ccur < i)
            {
                res++;
                ccur = cmax;
            }
            cmax = max(cmax,nums[i] + i);
        }
        
        return res;
    }
};