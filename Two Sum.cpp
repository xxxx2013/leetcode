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

class Solution {
    //map查找表方法
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        vector<int> res;
        
        map<int,int> rec;
        for(int i=0; i<nums.size(); i++)
        {
            rec[nums[i]] = i;
        }
        
        for(int i=0; i<nums.size(); i++)
        {
            map<int,int>::iterator it = rec.find(target-nums[i]);
            if(it!=rec.end() && it->second!=i)
            {
                res.push_back(i);
                res.push_back(it->second);
                break;
            }
        }
        sort(res.begin(),res.end());
        return res;
    }
};