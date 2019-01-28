class Solution {
    //双指针i,j+滑动窗口
public:
    int removeDuplicates(vector<int>& nums) {
        
        if(nums.size()<=2)
            return nums.size();
        int res = 0;
        int number = 0;
        for(int i=0,j=0; i<nums.size(),j<nums.size();)
        {
            if(nums[i]==nums[j])
            {
                number = number + 1;
                j++;
                if(number>=3)
                {
                    nums.erase(nums.begin()+j-1);
                    number = number - 1;
					j--;
                }
            }
            else if(nums[i]!=nums[j])
            {
                i = j;
                number = 0;
            }
        }


        return nums.size();
        
    }
};