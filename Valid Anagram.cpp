class Solution {
    //Map查找表方法
public:
    bool isAnagram(string s, string t) {
        
        if(s.size()!=t.size())
            return false;
        
        bool res = false;
        map<char,int> rec;
        for(int i=0; i<s.size(); i++)
        {
            rec[s[i]]++;
        }
        
        for(int i=0; i<t.size(); i++)
        {
            if(rec.find(t[i])==rec.end())
            {
                return false;
            }
            if(rec.find(t[i])!=rec.end())
            {
                if(rec[t[i]]!=0)
                {
                    rec[t[i]]--;
                    continue;
                }
                if(rec[t[i]]==0)
                    return false;
            }
            
        }
        res = true;
        return res;
        
    }
};