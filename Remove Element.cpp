class Solution {
public:
/*
ɾ�������к�elem��ȵ�Ԫ�أ����ҷ����������С
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