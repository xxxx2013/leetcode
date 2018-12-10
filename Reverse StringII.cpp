class Solution {
public:
    string reverseStr(string s, int k) {
        
        string res="";
        if(k<2)
            return s;
        if(k>=s.size())
        {
            int i=0;
            int j=s.size()-1;
            while(i<j)
            {
                char temp;
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
                i++;
                j--;
            }
            return s;
        }
        
        
        int n = 2;
        int l = 0;
        int r = k-1;
        
        while(l<s.size()-1)
        {
            if(r>s.size()-1)
            {
                r=s.size()-1;
            }
            if(l>=r)
            {
                l = n*k;
                r = l+k-1;
                n = n+2;
                continue;
            }
            else
            {
                char temp;
                temp = s[l];
                s[l] = s[r];
                s[r] = temp;
                l++;
                r--;                
            }

        }
        
        return s;
        
    }
};