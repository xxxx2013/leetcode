class Solution {
public:
    int firstUniqChar(string s) {
        
        if(s.size()==0)
        {
            return -1;
        }
        if(s.size()==1)
        {
            return 0;
        }
        
        map<char,int> rec;
        for(int i=0; i<s.size(); i++)
        {
            rec[s[i]]++;
        }
        vector<int> res;
        for(map<char,int>::iterator it=rec.begin(); it!=rec.end(); it++)
        {
            if(it->second==1)
            {
                res.push_back(s.find(it->first));
            }
        }
        if(res.size()==0)
            return -1;
        sort(res.begin(),res.end());
        return res[0];
    }
        
        
    
};