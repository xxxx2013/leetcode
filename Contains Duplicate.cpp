class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        
        set<int> rec;
        for(int i=0; i<nums.size(); i++)
        {
            if(rec.find(nums[i])!=rec.end())
                return true;
            rec.insert(nums[i]);
        }
        return false;
        
    }
};