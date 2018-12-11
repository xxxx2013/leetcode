class Solution {
public:
    bool containsNearbyAlmostDuplicate(vector<int>& nums, int k, int t) {
        
        set<long long> rec;
        for(int i=0; i<nums.size(); i++)
        {
            if(rec.lower_bound((long long)nums[i]-(long long)t)!=rec.end() && *(rec.lower_bound((long long)nums[i]-(long long)t))<=(long long)nums[i]+(long long)t)
                return true;
            rec.insert(nums[i]);
            if(rec.size()==k+1)
                rec.erase(nums[i-k]);
        }
        return false;
        
        
    }
};