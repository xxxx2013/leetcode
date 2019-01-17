class Solution {
    //每位s[i]乘上对应26的幂级数
public:
    int titleToNumber(string s) {
        
        if(s.size()==0)
            return 0;
        int res = 0;
        for(int i=s.size()-1,m=0; i>=0,m<s.size(); i--,m++)
        {
            res += (int)(s[i]-'A'+1)*pow(26,m);
        }
        
        return res;
        
    }
};