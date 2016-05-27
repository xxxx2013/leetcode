class Solution {
    /*
    把正数n放在第n-1个位置上，这样从第一个位置开始，如果位置上的数不等于
    位置号，那么就是第一个缺失的正数
    */
public:
    int firstMissingPositive(vector<int>& nums) {
        
        if(nums.size() == 0)
        return 1;
        
        int i;
        int size = nums.size();
        for(i = 0;i < size;i++)
        {
            while(nums[i] > 0 && nums[i] < size && nums[nums[i]-1] != nums[i])
            {
                int temp = nums[nums[i]-1];
                nums[nums[i]-1] = nums[i];
                nums[i] = temp;
            }
        }
        
        for(i = 0;i < size;i++)
        {
            if(nums[i] != i+1)
            {
                return (i+1);
            }
        }
        return size + 1;
    }
};