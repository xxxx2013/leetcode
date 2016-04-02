class Solution {
public:

/*
因为降序序列是没法变成更大的，所以从后往前找到第一个升序对的位置。
然后就存在调整大小排列顺序的可能，从后往前找到比当前位置大的元素，交换之。
当前位置后面的元素还是降序排列，将他们反转得到最小顺序排列。其实就是原来当前位置元素后面是最大的排列，
而交换后的新元素之后是最小的排列，他们就是相邻的顺序。
当不存在升序，则当前排列是最大排列，只要旋转整个序列变成最小排列。
*/
    void nextPermutation(vector<int>& nums) {
        
        int size = nums.size();
        int i,j;
        for(i = size - 2;i >= 0;i--)
        {
            if(nums[i+1] > nums[i])
            {
                for(j = size - 1;j >= i;j--)
                {
                    if(nums[j] > nums[i])
                    {
                        break;
                    }
                }
                    swap(nums[i],nums[j]);
                    reverse(nums.begin()+i+1,nums.end());
                    return;
                
            }
        }
        reverse(nums.begin(),nums.end());
        return;
        
        
    }
};