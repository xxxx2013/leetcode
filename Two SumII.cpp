class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        
        vector<int>  res;
        int size = numbers.size();
        int i = 0;
        int j =size-1;
        while(i<j)
        {
            if(numbers[i] + numbers[j] == target)
            {
                res.push_back(++i);
                res.push_back(++j);
                break;
            }
            if(numbers[i] + numbers[j] < target)
            {
                i++;
            }
            if(numbers[i] + numbers[j] > target)
            {
                j--;
            }
        }
        return res;
    }
};