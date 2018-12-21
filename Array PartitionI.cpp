class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
     
        if(nums.size()==0)
            return 0;
        if(nums.size()==2)
        {
            return nums[0]<=nums[1]?nums[0]:nums[1];
        }
        
        int res = 0;
        sort(nums.begin(),nums.end());
        for(int i=0; i<nums.size()-1; i++)
        {
            res += min(nums[i],nums[i+1]);
            i++;
        }
        return res;
    }
};