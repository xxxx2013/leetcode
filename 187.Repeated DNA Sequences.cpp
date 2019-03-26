class Solution {
    //map查找表法
public:
    vector<string> findRepeatedDnaSequences(string s) {
        
        map<string,int> rec;
        vector<string> res;
        
        if(s.size()<10)
            return res;
        
        for(int i=0; i<=s.size()-10; i++)
        {
            string temp = s.substr(i,10);
            rec[temp]++;
        }
        
        for(map<string,int>::iterator it=rec.begin(); it!=rec.end(); it++)
        {
            if(it->second>1)
            {
                res.push_back(it->first);
            }
        }
        
        return res;
    }
};