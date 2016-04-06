class Solution {
public:
    int search(vector<int>& nums, int target) {
        int size = nums.size();
        int left = 0;
        int right = size - 1;
        int mid = 0;
        while(left <= right)
        {
            mid = (right + left)/2;
            
           if(nums[left] == target)
            return left;
            if(nums[right] == target)
            return right;
            
            if(target == nums[mid])
            return mid;
            
            if(nums[left] < nums[right])
            {
                if(target < nums[mid])
                {
                    right = mid - 1;
                }
                else
                {
                    left = mid + 1;
                }
            }
            else if(nums[left] < nums[mid])
            {
                if(target > nums[mid] || target < nums[left])
                left = mid + 1;
                else right = mid - 1;
            }
            else 
            {
                if(target < nums[mid] || target > nums[right])
                right = mid - 1;
                else left = mid + 1;
            }
            
        }
        return  -1;
      
    }
};