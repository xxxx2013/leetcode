class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        int size = nums.size();
        map<int,int> rec;
        int res = 0;
        
        for(int i=0; i<size; i++)
        {
            rec[nums[i]]++;
        }
        
        for(int i=0; i<size; i++)
        {
            if(rec.find(nums[i])!=rec.end())
            {
                if(rec.find(nums[i])->second>size/2)
                {
                    res = nums[i];
                }
            }
        }
        return res;
    }
};