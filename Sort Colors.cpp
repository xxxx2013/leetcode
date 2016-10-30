class Solution {
    /* 扫描一遍，单向遍历(使用指针)*/
public:
    
    void swap(vector <int>& nums,int a,int b)
    {
        int temp = nums[a];
        nums[a] = nums[b];
        nums[b] = temp;
    }
    
    void sortColors(vector<int>& nums) {
        
        //vector <int> & result;
        int length = nums.size();
        int i;
        int a = 0;
        int b = 0;
        for(i = 0; i<length-b;i++)
        {
            if(nums[i] == 0)
            {
                swap(nums,i,a);
                a++;
            }
            else if(nums[i] == 2)
            {
                swap(nums,i,length-b-1);
                b++;
                i--;
            }
        }
        
        
    }
};