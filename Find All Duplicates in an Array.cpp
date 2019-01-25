class Solution {
    //map查找表方法
public:
    vector<int> findDuplicates(vector<int>& nums) {
        
        map<int,int> rec;
        vector<int> res;
        if(nums.size()<=1)
            return res;
        
        for(int i=0; i<nums.size(); i++)
        {
            rec[nums[i]]++;
        }
        
        for(map<int,int>::iterator it=rec.begin(); it!=rec.end(); it++)
        {
            if(it->second==2)
            {
                res.push_back(it->first);
            }
        }
        
        return res;
    }
};