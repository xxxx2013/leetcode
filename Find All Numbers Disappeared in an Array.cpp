class Solution {
    //set集合方法找出All Numbers that Disappeared
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        
        vector<int> res;
        if(nums.size()<=1)
            return res;
        
        set<int> rec;
        for(int i=0; i<nums.size(); i++)
        {
            rec.insert(nums[i]);
        }
        int i;
        set<int>::iterator it;
        for(it=rec.begin(), i=1;it!=rec.end(),i<=nums.size();it++,i++)
        {
            if(*it!=i)
            {
                res.push_back(i);
                rec.insert(i);
                it--;
            }
        }
        return res;
    }
};