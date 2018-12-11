class Solution {
public:
    string toLowerCase(string str) {
        
        for(int i=0; i<str.size(); i++)
        {
            if(str[i]>='A'&&str[i]<='Z')
            {
                char c = str[i] + 32;
                str[i] = c;
            }
        }
        
        return str;
        
    }
};