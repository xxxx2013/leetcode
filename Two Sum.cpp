class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        unordered_map<int,int> record;
        vector<int> res;
        for(int i=0; i<nums.size(); i++)
        {
            if(record.find(target-nums[i])!=record.end())
            {
                int rec[2];
                rec[0] = i;
                rec[1] = record[target-nums[i]];
                res.push_back(rec[0]);
                res.push_back(rec[1]);
                break;
            }
            record[nums[i]] = i;
        }
       return res;
    }
};