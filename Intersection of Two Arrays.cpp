class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        
        int size1 = nums1.size();
        int size2 = nums2.size();
        
        set <int> rec;
        set <int> rec2;
        vector <int> res;
        res.clear();
        for(int i=0; i<size1; i++)
        {
            rec.insert(nums1[i]);
        }
        for(int i=0; i<size2; i++)
        {
            if(rec.find(nums2[i])!=rec.end())
                rec2.insert(nums2[i]);
        }
        for(set<int>::iterator it=rec2.begin(); it!=rec2.end(); it++)
        {
            res.push_back(*it);
        }
        return res;
        
    }
};