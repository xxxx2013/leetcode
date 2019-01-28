class Solution {
public:
    string reverseVowels(string s) {
        
        string vowels = "";
        if(s.size()<=1)
            return s;
        
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]=='i' || s[i]=='u' || s[i]=='o' || s[i]=='e' || s[i]=='a' || s[i]=='I' || s[i]=='U' || s[i]=='O' || s[i]=='E' || s[i]=='A')
            {
                vowels = vowels + s[i];
            }
        }
        if(vowels.size()==1)
        {
            return s;
        }
        reverse(vowels.begin(),vowels.end());
        for(int i=0,j=0; i<s.size(),j<vowels.size(); i++)
        {
            if(s[i]=='i' || s[i]=='u' || s[i]=='o' || s[i]=='e' || s[i]=='a' || s[i]=='I' || s[i]=='U' || s[i]=='O' || s[i]=='E' || s[i]=='A')
            {
                s[i] = vowels[j];
                j++;
            }            
        }
        return s;
    }
};