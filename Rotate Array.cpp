class Solution {
    //取余计算
public:
    void rotate(vector<int>& nums, int k) {
        
        if(nums.size()<=1)
            return;
        
        int size = nums.size();
        vector<int> rec;
        for(int i=0; i<nums.size(); i++)
        {
            rec.push_back(nums[i]);
        }
        int num = k%size;
        if(num==0)
            return;
        
        nums.clear();
        for(int i=rec.size()-num; i<rec.size(); i++)
        {
            nums.push_back(rec[i]);
        }
        for(int i=0; i<rec.size()-num; i++)
        {
            nums.push_back(rec[i]);
        }
        return;
    }
};