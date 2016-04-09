class Solution {
public:
 
    
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        //merge���ϲ������в����µ���������
    vector <int> newnums;
    //assign����һ��������ֵ����ֵ������һ��������
    newnums.assign(nums1.begin(),nums1.end());
    //insert����������ֵ���뵽����һ��������
    newnums.insert(newnums.end(),nums2.begin(),nums2.end());
    //sort��������������
    sort(newnums.begin(),newnums.end());
    int n1 = nums1.size();
    int n2 = nums2.size();
    double mid;
    if((((n1 + n2) % 2) == 1))
    {
        mid = newnums[(n1 + n2)>>1];
    }
    if((((n1 + n2) % 2) == 0))
    {
        mid = newnums[(n1 + n2 - 1)>>1] + newnums[(n1 + n2)>>1];
        mid = mid/2.0;
    }
        return mid;
        
    }
};