class Solution {
public:
    int fourSumCount(vector<int>& A, vector<int>& B, vector<int>& C, vector<int>& D) {
        
        int res = 0;
        map<int,int> rec;
        rec.clear();
        
        for(int i=0; i<A.size(); i++)
            for(int j=0; j<B.size(); j++)
            {
                rec[A[i]+B[j]]++;
            }
        
        for(int i=0; i<C.size(); i++)
            for(int j=0; j<D.size(); j++)
            {
                if(rec.find(0-C[i]-D[j])!=rec.end())
                {
                    res = res + rec[0-C[i]-D[j]];
                }
            }
        return res;
    }
};