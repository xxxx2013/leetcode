class Solution {
    //K个元素的最小堆优先队列
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        map<int,int> rec;
        for(int i=0; i<nums.size(); i++)
        {
            rec[nums[i]]++;
        }
        
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
        
        for(map<int,int>::iterator it=rec.begin(); it!=rec.end(); it++)
        {
            if(pq.size()==k)
            {
                if(it->second>pq.top().first)
                {
                    pq.pop();
                    pq.push(make_pair(it->second,it->first));
                }
            }
            else
            {
                pq.push(make_pair(it->second,it->first));
            }
    }
        
        vector<int> res;
        while(pq.empty()==false)
        {
            res.push_back(pq.top().second);
            pq.pop();
        }
        
        return res;
    }
};