class Solution {
    //构造vector<int> rec(26,0) 一维查找表
public:
    vector<string> commonChars(vector<string>& A) {
        
        vector<string> res;
        if(A.size()==1)
            return res;
        
        string t1 = A[0];
        
        vector<int> rec(26,0);
        
        for(int i=0; i<t1.size(); i++)
        {
            rec[t1[i]-'a']++;
        }
        
        for(int i=1; i<A.size(); i++)
        {
            for(int j=0; j<26; j++)
            {
                if(rec[j]!=0)
                {
                    int num = count(A[i].begin(),A[i].end(),(char)(j+'a'));
                    if(num<rec[j])
                        rec[j] = num;
                }
            }
        }
        
        for(int j=0; j<26; j++)
        {
            if(rec[j]!=0)
            {
                char temp = 'a'+j;
                string a;
                a += temp;
                for(int i=0; i<rec[j]; i++)
                {
                    res.push_back(a);
                }
            }
        }
        
        return res;
    }
};