class Solution {
public:
/*
主要思路： 
 * 1、为了选出的三元组是非递减的，先对输入数组进行排序 
 * 2、穷举法选取符合条件的三元组，由于每个元素只能取一次，所以当前循环的起始为上次循环起始之后 
 * 3、由于原始输入数组本身可能包含重复元素，所以需要对选取到的三元组进行筛选移除重复三元组 
*/

    vector<vector<int>> threeSum(vector<int>& nums) {
     
     vector <vector<int>> result;
     result.clear();
     int i;
     int length = nums.size();
     //数组排序
     sort(nums.begin(),nums.end());
     for(i = 0; i < length; i++)
     {
         if(i > 0 && nums[i] == nums[i-1])
         {
             continue;
         }
         
         int j;
         int k;
         j = i + 1;
         k = length - 1;
         while(j < k)
         {
             if(j > i+1 && nums[j] == nums[j-1])
             {
                 j++;
                 continue;
             }
             
             if(k < (length-1) && nums[k] == nums[k+1])
             {
                 k--;
                 continue;
             }
             int sum = nums[i] + nums[j] + nums[k];
             if(sum > 0)
             {
                 k--;
             }
             else if(sum < 0)
             {
                 j++;
             }
             else
             {
                 vector <int> temp;
                 temp.push_back(nums[i]);
                 temp.push_back(nums[j]);
                 temp.push_back(nums[k]);
                 result.push_back(temp);

                 
                 j++;
             }
         }
     }
     
     return result;
     
     
    }
};