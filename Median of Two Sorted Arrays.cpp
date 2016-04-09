class Solution {
public:
 
    
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        //merge：合并两序列并对新的序列排序
    vector <int> newnums;
    //assign：将一个容器的值，赋值到另外一个容器中
    newnums.assign(nums1.begin(),nums1.end());
    //insert：将容器中值插入到另外一个容器中
    newnums.insert(newnums.end(),nums2.begin(),nums2.end());
    //sort：容器进行排序
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