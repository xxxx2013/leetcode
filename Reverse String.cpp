class Solution {
public:
    string reverseString(string s) {
        
        string res;
        int len = s.size();
        int i = 0;
        int j = len-1;
        while(i<len)
        {
            res += s[j];
            ++i;
            --j;
        }
        return res;
        
    }
};