class Solution {
/*
��׼�Ķ��������㷨���ڽ�����ʱ�����û���ҵ�target����ôleftָ��С��target����������rightָ�����target����С������
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