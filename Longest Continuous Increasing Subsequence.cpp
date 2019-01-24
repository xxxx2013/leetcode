class Solution {
    //滑动串口(l,r)求解 初始值l=0,r=1
public:
    int findLengthOfLCIS(vector<int>& nums) {
        
        if(nums.size()==0)
            return 0;
        if(nums.size()==1)
            return 1;
        
        vector<int> res;
        int temp = nums[0];
        int l=0;
        int r=1;
        for(int i=1; i<nums.size(); i++)
        {
            if(nums[i]>temp)
            {
                temp =nums[i];
                r = i;
                res.push_back(r-l+1);
            }
            else if(nums[i]<temp)
            {
                temp = nums[i];
                l = i;
                res.push_back(r-l+1);
            }
            else if(nums[i]==temp)
            {
                temp = nums[i];
                l=i;
                r=i;
                res.push_back(r-l+1);
            }
        }
        
        sort(res.begin(),res.end());
        return res[res.size()-1];
        
    }
};