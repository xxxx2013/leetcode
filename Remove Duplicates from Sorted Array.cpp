class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        int size = nums.size();
        
        if(size ==0)
        return 0;
        
        int result = 1;
        int index = 1;
        int pre = nums[0];
        while(index < size)
        {
            if(!(nums[index] == pre))
            {
                nums[result++] = nums[index];
            }
            pre = nums[index];
            index++;
        }
        
        return result;
    }
};