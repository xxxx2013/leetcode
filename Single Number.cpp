class Solution {
    /*
    ����λ���㣬ʱ�临�Ӷ�ΪO(n)
    */
public:
    int singleNumber(vector<int>& nums) {
        
        if(nums.size() == 0)
        return 0;
        
        int res = nums[0];
        int i;
        for(i = 1;i < nums.size();i++)
        {
            res = res ^ nums[i];
        }
        return res;
        
    }
};