class Solution {
public:
    int countSegments(string s) {
        
        int res = 0;
        deletespace(s);
        int size = s.size();
        if(size==0)
            return 0;
        for(int i=0; i<size-1; i++)
        {
            if(s[i]==' ')
                res++;
        }
        if(res==0&&s[0]!=' ')
        {
            return res+1;
        }
        if(res==0&&s[0]==' ')
        {
            return res;
        }
        return res+1;
    }
    
    void deletespace(string& s)
    {
        int size = s.size();
        for(int i=0; i<size;)
        {
            if(s[i]==' '&&i==0)
            {
                s.erase(i,1);
                continue;
            }
            if(s[i]==' '&&s[i+1]==' ')
            {
                s.erase(i,1);
                continue;
            }
            if(s[i]==' '&&i==size-1)
            {
                s.erase(i,1);
                continue;
            }
            i++;
        }
    }
};