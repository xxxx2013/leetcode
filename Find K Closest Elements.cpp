class Solution {
    //考虑x取值范围的三种情况,使用双指针i,j.
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        
        vector<int> res;
        if(x<=arr[0])
        {
            for(int i=0; i<k; i++)
            {
                res.push_back(arr[i]);
            }
        }
        else if(x>=arr[arr.size()-1])
        {
            for(int i=arr.size()-k; i<arr.size(); i++)
            {
                res.push_back(arr[i]);
            }
        }
        else
        {
            int min = abs(x-arr[0]);
            int temp = 0;
            int number = 0;
            for(int i=1; i<arr.size(); i++)
            {
                if(abs(x-arr[i])<=min)
                {
                    temp = i;
                    min = abs(x-arr[i]);
                }
            }
            for(int i=temp-1,j=temp;;)
            {
				if(i<0 && j<arr.size() && number<k)
				{
					res.push_back(arr[j]);
					number++;
					j++;
				}
				else if(j>=arr.size() && i>=0 && number<k)
				{
					res.push_back(arr[i]);
					number++;
					i--;
				}
                else if(i>=0 && j<arr.size() && abs(x-arr[i])<=abs(x-arr[j]))
                {
                    res.push_back(arr[i]);
                    number++;
                    i--;
                }
                else if(i>=0 && j<arr.size() && abs(x-arr[j])<=abs(x-arr[i]))
                {
                    res.push_back(arr[j]);
                    number++;
                    j++;                        
                }
                if(number==k)
                    break;
            }
            
            sort(res.begin(),res.end());
        }
        
        
        return res;
        
    }
};