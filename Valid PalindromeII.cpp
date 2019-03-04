class Solution {
public:
    bool validPalindrome(string s) {
 
        m = 0;
        n = 0;
        if(ispalindrome(s))
            return true;
        
        string temp1 = s;
        string temp2 = s;
        string s1;
        string s2;
        s1 = temp1.erase(m,1);
        s2 = temp2.erase(n,1);
        
        return ispalindrome(s1) || ispalindrome(s2);
    }
    
    bool ispalindrome(string& s)
    {
        if(s.size()==1)
            return true;
        int l = 0;
        int r = s.size()-1;
        while(l<r)
        {
            if(s[l]!=s[r])
            {
                m = l;
                n = r;
                return false;
            }
            l++;
            r--;
        }
        return true;
    }
private:
    int m;
    int n;
};
