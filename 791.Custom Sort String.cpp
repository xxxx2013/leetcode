class Solution {
    //map查找表法
public:
    string customSortString(string S, string T) {
        
        map<int,char> rec_s;
        for(int i=0; i<S.size(); i++)
        {
            rec_s[i] = S[i];
        }
        map<char,int> rec_t;
        for(int i=0; i<T.size(); i++)
        {
            rec_t[T[i]]++;
        }
        string res;
        
        for(map<int,char>::iterator it=rec_s.begin();it!=rec_s.end(); it++)
        {
            map<char,int>::iterator tt = rec_t.find(it->second);
            if(tt!=rec_t.end())
            {
                for(int j=0; j<tt->second; j++)
                {
                    res = res + tt->first;
                }
                rec_t.erase(tt);                
            }

        }
        
        for(map<char,int>::iterator it=rec_t.begin(); it!=rec_t.end(); it++)
        {
            for(int j=0; j<it->second; j++)
            {
                res = res + it->first;
            }
        }
        
        return res;
        
    }
};