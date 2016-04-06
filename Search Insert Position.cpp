class Solution {
/*
标准的二分搜索算法，在结束的时候，如果没有找到target：那么left指向小于target的最大的数，right指向大于target的最小的数。
*/
public:
    int searchInsert(vector<int>& nums, int target) {
        
        int size = nums.size();
        int left = 0;
        int right = size - 1;
        int mid = 0;
        int num;
        while(left <= right)
        {
            mid = (left + right)/2;
            if(target == nums[mid])
            return mid;
            if(target < nums[mid])
            {
                right = mid - 1;
            }
            if(target > nums[mid])
            {
                left = mid + 1;
            }
            
        }
        return left;
        
    }
};