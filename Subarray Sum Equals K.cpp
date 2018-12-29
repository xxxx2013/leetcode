class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        
        if(nums.size() == 1)
        {
            if(k == nums[0])
                return 1;
            else
                return 0;
        }
        
        int sum = 0;
        int length = 0;
        int number = 0;
        
        for(int i=0; i<nums.size(); i++)
        {
            int sum = 0;
            for(int j=i; j<nums.size(); j++)
            {
                sum = sum + nums[j];
                if(sum == k)
                    number++;
            }
        }

        return number;
    }
};