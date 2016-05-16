class Solution {
    /*
    考虑两个数组从后往前比较
    */
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
        int l1 = m - 1;
        int l2 = n - 1;
        int l = m + n - 1;
        
        while(l1 >= 0 && l2 >= 0)
        {
            if(nums2[l2] > nums1[l1])
            {
                nums1[l--] = nums2[l2--];
            }
            else
            {
                nums1[l--] = nums1[l1--];
            }
        }
        
        while(l1 >= 0)
        {
            nums1[l--] = nums1[l1--];
        }
        
        while(l2 >= 0)
        {
            nums1[l--] = nums2[l2--];
        }
        
        
    }
};