class Solution {
	//双指针法
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

class Solution {
    //map<int,int>查找表法
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        
        vector<int> res;
        map<int,int> rec;
        
        for(int i=0; i<numbers.size(); i++)
        {
            rec[numbers[i]] = i;
        }
        
        for(int i=0; i<numbers.size(); i++)
        {
            map<int,int>::iterator it = rec.find(target-numbers[i]);
            if(it!=rec.end() && it->second>i)
            {
                res.push_back(i+1);
                res.push_back(it->second+1);
                break;
            }
        }
        
        return res;
    }
};