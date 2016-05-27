class Solution {
    //和3sum类似，但不用判断重复问题
public:
    int threeSumClosest(vector<int>& nums, int target) {
        
        int n;
        int i;
        const int length = nums.size();
       // int n[length];
        sort(nums.begin(),nums.end());
        
        int max = 0x7fffffff;
        
        for(i = 0;i <length; i++)
        {
            int j;
            int k;
            j = i + 1;
            k = length - 1;
            while(j < k)
            {
                int sum = nums[i] + nums[j] +nums[k];
                
                if(sum == target)
                {
                    return sum;
                }
                
                if(abs(sum - target) < max)
                {
                   n = sum;
                   max = abs (sum - target);
                }
                if(sum > target)
                {
                    k--;
                }
                else
                {
                    j++;
                }
            }
        }
        
        return n;
    }
};