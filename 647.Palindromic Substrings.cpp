class Solution {
    //遍历子串中心位置，寻找所有回文子串
public:
    int countSubstrings(string s) {
        
        if(s.size()<=1)
            return s.size();
        
        if(s.size()==2)
        {
            return s[0]==s[1]?3:2;
        }
        
        int res = 0;
        
        for(int i=0; i<s.size(); i++)
        {
            for(int j=0; (i-j)>=0 &&(i+j)<s.size(); j++)
            {
                if(s[i-j]!=s[i+j])
                {
                    break;
                }
                else
                {
                    res = res + 1;
                }
            }
            
            for(int j=0; (i-j)>=0&&(i+j+1)<s.size(); j++)
            {
                if(s[i-j]!=s[i+j+1])
                {
                    break;
                }
                else
                {
                    res = res + 1;
                }
            }
            
        }
        
        return res;
    }
};