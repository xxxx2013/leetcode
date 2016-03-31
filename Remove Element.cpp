class Solution {
public:
/*
删除数组中和elem相等的元素，并且返回新数组大小
*/
    int removeElement(vector<int>& nums, int val) {
        
        int size = nums.size();
        int i;
        int j;
        for(i = 0 ;i < size; i++)
        {
            if(val == nums[i])
            {
              for(j = i; j < size - 1; j++)
              {
                  nums[j] = nums[j + 1];
              }
              
              size--;
              i--;
            }
        }
        return size;
        
    }
};