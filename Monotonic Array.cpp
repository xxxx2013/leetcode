class Solution {
public:
    bool isMonotonic(vector<int>& A) {
     
        if(A.size()<=2)
            return true;
        
        int higher = 0;
        int lower = 0;
        int equal = 0;
        int standard = A[0];
        
        for(int i=0; i<A.size()-1; i++)
        {
            if(A[i+1]-A[i]>0)
            {
                higher++;
            }
            else if(A[i+1]-A[i]<0)
            {
                lower++;
            }
        }
        
        if(higher>0 && lower>0)
        {
            return false;
        }
        
        return true;
        
        
    }
};