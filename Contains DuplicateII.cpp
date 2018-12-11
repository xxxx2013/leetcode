class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        
        set<int> rec;
        for(int i=0; i<nums.size(); i++)
        {
            if(rec.find(nums[i])!=rec.end())
                return true;
            rec.insert(nums[i]);
            if(rec.size()==k+1)
                rec.erase(nums[i-k]);
            
        }
        return false;
    }
};