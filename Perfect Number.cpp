class Solution {
    //找到所有的约数,然后对所有的约数相加是否等于num本身
public:
    bool checkPerfectNumber(int num) {
        
        if(num==0)
            return false;
        if(num==1)
            return false;
        
        vector<int> rec;
        
        for(int i=1; i<=num/2; i++)
        {
            if(num%i==0)
                rec.push_back(i);
        }
        int sum = 0;
        for(int i=0; i<rec.size(); i++)
        {
            sum = sum + rec[i];
        }
        
        if(sum==num)
            return true;
        else
            return false; 
    }
};