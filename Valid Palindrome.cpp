class Solution {
public:
    bool isPalindrome(string s) {
        
        if (s.size() == 0 || s.size() == 1)
            return true;
        
        int i = 0;
        int j = s.size() - 1;
        
        
        while(i<j)
        {
            if(s[i]>='A'&&s[i]<='Z')
            {
                s[i] = s[i] + 32;
            }
            if(s[j]>='A'&&s[j]<='Z')
            {
                s[j] = s[j] + 32;
            }           
            if(s[i]<'a')
            {
                if(s[i]<'0'||s[i]>'9')
                {
                    i++;
                    continue;                    
                }   
            }
            if(s[i]>'z')
            {
                i++;
                continue;
            }
            if(s[j]<'a')
            {
                if(s[j]<'0'||s[j]>'9')
                {
                    j--;
                    continue;                    
                }           
            }
            if(s[j]>'z')
            {
                j++;
                continue;
            }
            if(s[i] != s[j])
            {
                return false;
            }
            else
            {
                ++i;
                --j;
            }
        }
        return true;
    }
};