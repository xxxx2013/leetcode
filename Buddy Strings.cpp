class Solution {
public:
    bool buddyStrings(string A, string B) {
        
        bool res = false;
        if(A.size()!=B.size())
        {
            return false;
        }
        if(A.size()==0 && B.size()==0)
        {
            return false;
        }
        vector<int> a;
        map<char,int> rec;
        a.clear();
        for(int i=0; i<A.size(); i++)
        {
            if(A[i] != B[i])
            {
                a.push_back(i);
            }
            rec[A[i]]++;
        }
        if(a.size()>2 || a.size()==1)
            return false;
        if(a.size()==0)
        {  
            for(map<char,int>::iterator it=rec.begin(); it!=rec.end(); it++)
            {
                if(it->second>=2)
                    return true;
            }
            return false;
        }
        if(a.size()==2)
        {
            char temp = A[a[0]];
            A[a[0]] = A[a[1]];
            A[a[1]] = temp;
            if(A==B)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
        return true;
        
    }
};