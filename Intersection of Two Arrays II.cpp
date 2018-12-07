class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        
        map<int,int> rec,rec2;
        vector<int> res;
        
        int size1 = nums1.size();
        int size2 = nums2.size();
        
        for(int i=0; i<size1; i++)
        {
            rec[nums1[i]]++;
        }
        for(int i=0; i<size2; i++)
        {
            if(rec.find(nums2[i])!=rec.end() && rec[nums2[i]]!=0)
            {
                rec2[nums2[i]]++;
                rec[nums2[i]]--;
            }
        }
        for(map<int,int>::iterator it=rec2.begin(); it!=rec2.end(); it++)
        {
            for(int i=0; i<(*it).second; i++)
            {
                res.push_back((*it).first);
            }
        }
        return res;
    }
};