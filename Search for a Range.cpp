class Solution {
public:
/*
二分查找，分别求等于给定数字最靠左的位置和最靠右的位置
*/
    vector<int> searchRange(vector<int>& nums, int target) {
        
        int size = nums.size();
        vector <int> result(2);
        result[0] = -1;
        result[1] = -1;
        
        
        int left = 0;
        int right = size - 1; 
        int mid = 0;
        while(left <= right)
        {
            mid = (left + right)/2;
            if(nums[mid] == target)
            {
                break;
            }
            if(nums[mid] > target)
            {
                right = mid - 1;
            }
            if(nums[mid] < target)
            {
                left = mid + 1;
            }
        }
        if(nums[mid] == target)
        {
            int left1 = mid;
            while(left1 >= 0 && nums[left1] == target)
            {
                left1--;
            }
            int right1 = mid;
            while(right1 < size && nums[right1] == target)
            {
                right1++;
            }
            
            result[0] = left1 + 1;
            result[1] = right1 - 1;
            
        }
        
        return result;
    }
};