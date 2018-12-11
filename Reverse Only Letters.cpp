class Solution {
public:
    string reverseOnlyLetters(string S) {
        
        int l = 0;
        int r = S.size()-1;
        while(l<r)
        {
            if((S[l]<=64)||(S[l]>=91&&S[l]<=96))
            {
                l++;
                continue;
            }
            if((S[r]<=64)||(S[r]>=91&&S[r]<=96))
            {
                r--;
                continue;
            }
            char temp;
            temp = S[l];
            S[l] = S[r];
            S[r] = temp;
            l++;
            r--;
            
        }
        return S;
    }
};