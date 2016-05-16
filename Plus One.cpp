class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        
        vector <int> result(digits);
        int i;
        int size = digits.size();
        reverse(result.begin(),result.end());
        int flag = 1;
        for(i = 0;i < result.size();i++)
        {
            result[i] += flag;
            flag = result[i]/10;
            result[i] %= 10;
        }
        
        if(flag == 1)
        {
            result.push_back(1);
        }
        
        reverse(result.begin(),result.end());
        return result;
        
        
    }
};