class Solution {
public:
    bool checkRecord(string s) {
        
        if(s.size()==0)
            return false;
        
        map<char,int> rec;
        int a_number = 0;
        int l_number = 0;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]=='A')
            {
                a_number = a_number + 1;
            }
            else if(s[i]=='L')
            {
                l_number = 1;
                if(i!=s.size()-1)
                {
                    for(int j=i+1; j<s.size(); j++)
                    {
                        if(s[j]!='L')
                            break;
                        l_number = l_number + 1;
                        if(l_number>2)
                            return false;
                    }
                }
            }
        }
        return a_number<=1;
    }
};