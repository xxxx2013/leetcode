class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) {
        
        vector<int> res;
        if(A.size()==1)
            return A;
        
        for(int i=0; i<A.size(); i++)
        {
            if(A[i]%2==0)
                res.push_back(A[i]);
        }
        
        for(int i=0; i<A.size(); i++)
        {
            if(A[i]%2!=0)
                res.push_back(A[i]);
        }        
        return res;
        
    }
};