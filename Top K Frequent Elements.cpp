class Solution {
    //使用基于最小堆的priority_queue最小有限队列求解
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        map<int,int> rec;
        
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> p_queue;
        
        for(int i=0; i<nums.size(); i++)
        {
            rec[nums[i]]++;
        }
        
        for(map<int,int>::iterator it=rec.begin(); it!=rec.end(); it++)
        {
            if(p_queue.size()==k)
            {
                if(it->second>p_queue.top().first)
                {
                    p_queue.pop();
                    p_queue.push(make_pair(it->second,it->first));
                }
            }
            else
            {
                p_queue.push(make_pair(it->second,it->first));
            }
            
            
        }
        
        vector<int> res;
        
        while(p_queue.empty()==false)
        {
            res.push_back(p_queue.top().second);
            p_queue.pop();
        }
        return res;
        
    }
};