class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        
        if(nums.size()==0)
            return 0;
        
        vector<int> res;
        vector<int> rec;
        
        int max_num = 0;
        int step = 0;
        
        for(int i=0; i<nums.size();)
        {
            if(nums[i] == 1)
            {
                for(int j=i; j<nums.size(); j++)
                {
                    if(nums[j] == 1)
                    {
                        step = step + 1;
                        if(j == nums.size()-1)
                        {
                            rec.push_back(step);
                            i = j + 1;
                            break;
                        }
                    }
                    else
                    {
                        i = j+1;
                        rec.push_back(step);
                        step = 0;
                        break;
                    }
                }
            }
            else
            {
                i++;
            }
        }
        
        if(rec.size()==0)
            return 0;
        
        sort(rec.begin(),rec.end());
        return rec[rec.size()-1];
        //return 3;

    }
};