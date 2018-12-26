class Solution {
    //二分法检索有序数组
public:
    int search(vector<int>& nums, int target) {
        
        if(nums.size()==0)
            return -1;
        if(nums.size()==1)
        {
            if(target==nums[0])
                return 0;
            else
                return -1;
        }
        
        int l = 0;
        int r = nums.size()-1;
        while(l<=r)
        {
            int mid = (l+(r-l)/2);
            if(target == nums[mid])
            {
                return mid;
            }
            else if(target < nums[mid])
            {
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
            
        }
        return -1;
        
    }
};