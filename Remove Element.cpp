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

class Solution {
    //vector erase删除特定元素
public:
    int removeElement(vector<int>& nums, int val) {
        
        if(nums.size()==0)
            return 0;
        
        int size = nums.size();
        
        for(int i=0; i<nums.size(); i++)
        {
            if(nums[i] == val)
            {
                nums.erase(nums.begin()+i);
                size = size - 1;
                i--;
            }
        }
        
        return size;
    }
};