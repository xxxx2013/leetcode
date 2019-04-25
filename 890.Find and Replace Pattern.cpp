class Solution {
    //双查找表map<char,char> 建立双向映射
public:
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        
        vector <string> res;
        
        for(int i=0; i<words.size(); i++)
        {
            if(ismatch(words[i],pattern))
            {
                res.push_back(words[i]);
            }
        }
        
        return res;
    }
    
    bool ismatch(string& s, string& pattern)
    {
        
        map<char,char> rec;
        map<char,char> red;
        
        for(int i=0; i<s.size(); i++)
        {
            map<char,char>::iterator it = rec.find(pattern[i]);
            map<char,char>::iterator its = red.find(s[i]);
            if(it==rec.end())
            {
                rec[pattern[i]] = s[i];
            }
            else
            {
                if(it->second != s[i])
                {
                    return false;
                }
            }
            
			if(its==red.end())
			{
				red[s[i]] = pattern[i];
			}
			else
			{
				if(its->second != pattern[i])
				{
					return false;
				}

			}
        }
        
        return true;
    }
};