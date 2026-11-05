class Solution {
public:
    typedef pair<int,int> p;
    vector<int> topKFrequent(vector<int>& nums, int k) {
        //1. create a map
        unordered_map<int,int> mp;
        for(int &num :nums){
            mp[num]++;
        }

        //2.push elements in priority queue(min heap)
        // maintain the order of size k
        priority_queue<p,vector<p>,greater<p>> pq;
        
        for(auto &it: mp){
            int value = it.first;
            int freq = it.second;

            pq.push({freq,value});

            if(pq.size() > k){
                pq.pop();
            }
        }
        //3. result
        vector<int> result;
        while(!pq.empty()){
            result.push_back(pq.top().second);
            pq.pop();
        }

        return result;

    }
};
