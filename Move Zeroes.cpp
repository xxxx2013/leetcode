class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        
        int k=0;
        int i;
        for(i=0; i<nums.size(); i++)
        {
            if(0!=nums[i])
            {
                nums[k] = nums[i];
                k++;
            }
        }
        for(i=k; i<nums.size(); i++)
        {
            nums[i] = 0;
        }
        
        return;
        
    }
};