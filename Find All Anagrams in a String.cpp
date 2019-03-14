class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        
        vector<int> res;
        if(s.size() < p.size())
            return res;
        
        for(int i=0; i<s.size()-p.size()+1; i++)
        {
            string temp = s.substr(i,p.size());
            if(checkInclusion(temp,p))
            {
                res.push_back(i);
            }
        }
        
        return res;
        
    }
    bool checkInclusion(string s1, string s2) {
    

        vector<int> rec1(256,0); //char型变量范围
        vector<int> rec2(256,0);
        for(int i=0; i<s1.size(); i++)
        {
            rec1[s1[i]]++;
            rec2[s2[i]]++;
        }
        
        for(int i=0; i<rec1.size(); i++)
        {
            if(rec1[i]!=rec2[i])
                return false;
        }
        
        return true;
    }
};