class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        unordered_set<int>m;

        for(int x:nums){
            m.insert(x);
        }
        int ans=0;
        for(auto& x:m){
            int cnt = 1;
            int y = x;
            if(m.find(y-1) == m.end()){
                while(m.find(y+1)!=m.end()){
                    y=y+1;
                    cnt++;
                }
            }
            ans = max(ans,cnt);
        }
        return ans;
    }
};
