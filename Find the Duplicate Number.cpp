class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        
        int res = 0;
        int size = nums.size();
        int i;
        sort(nums.begin(),nums.end());
        res = nums[0];
        for(i=0; i<size; i++)
        {
            if(nums[i]==nums[i+1]) res = nums[i];
        }
        
        return res;

        
        
    }
};