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

class Solution {
    //vector eraseɾ���ض�Ԫ��
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