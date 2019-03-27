class Solution {
    //时间复杂度O(n) 空间复杂度O(1)
public:
    int singleNumber(vector<int>& nums) {
        
        if(nums.size()==1)
            return nums[0];
        
        sort(nums.begin(),nums.end());
        int res = nums[0];
        if(nums[1]!=res)
        {
            return nums[0];
        }
        for(int i=0; i<=nums.size()-3; i++)
        {
            for(int j=i; j<i+3; j++)
            {
                if(nums[j]!=nums[j+1] && nums[j+1]!=nums[j+2])
                    return nums[j+1];
                else
                {
                    break;
                }
            }
        }
        
        return nums[nums.size()-1];
    }
};