class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int,int>m;
        for(int x: nums)m[x]++;
        vector<int>ans;
        priority_queue<pair<int,int>>pq;
        for(auto&x:m){
            pq.push({x.second,x.first});
        }

        while(k>0){
            ans.push_back(pq.top().second);
            pq.pop();
            k--;
        }
        return ans;
    }
};
