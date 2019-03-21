class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        
        if(s.size()<=1)
            return false;
        
        int number = s.size()/2;
        vector<int> rec;
        for(int i=1; i<=number; i++)
        {
            if(s.size()%i==0)
            {
                rec.push_back(i);
            }
        }
        vector<string> res;
        for(int i=0; i<rec.size(); i++)
        {
            if(splitstring(s,res,rec[i])==true)
            {
                return true;
            }
        }
        return false;
    }
    
    bool splitstring(string& s,vector<string> &res,int n)
    {
        int l = 0;
        while(l<s.size())
        {
		    string temp = s.substr(l,n);
		    res.push_back(temp);
		    l = l + n;            
        }
        for(int i=1; i<res.size(); i++)
        {
            if(strcmp(res[i].c_str(),res[0].c_str())!=0)
            {
                res.clear();
                return false;
            }
        }
        res.clear();
        return true;
    }
    
};