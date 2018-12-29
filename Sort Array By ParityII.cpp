class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& A) {
        
        vector<int> res(A.size());
        
        int even = 0;
        int odd = 1;
        
        for(int i=0; i<A.size(); i++)
        {
            if(A[i]%2==0)
            {
                res[even] = A[i];
                even = even+2;
            }
            else
            {
                res[odd] = A[i];
                odd = odd+2;
            }
        }
        return res;
        
    }
};