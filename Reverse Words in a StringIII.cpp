class Solution {
public:
    string reverseWords(string s) {
        
        string res = "";
        
        int size = s.size();
        int a = 0;
        
        for(int i=0; i<size; i++)
        {
            if(s[i]==' ')
            {
                string temp = s.substr(a,i-a);
                reverseword(temp);
                res += temp;
                res += s[i];
                a = i+1;
            }
            if(i==size-1)
            {
                string temp = s.substr(a,i-a+1);
                reverseword(temp);
                res += temp;
            }
        }
        
        
        return res;
        
    }
    
    void reverseword(string& s)
    {
        int size = s.size();
        int l=0;
        int r=size-1;
        while(l<r)
        {
            char temp;
            temp = s[l];
            s[l] = s[r];
            s[r] = temp;
            l++;r--;
        }
    }
    
};