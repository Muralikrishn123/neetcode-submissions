class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        int n = nums.size();
        for(int i=0;i<n;i++){
            if(i>0 && nums[i]==nums[i-1])continue;
            int l=i+1,h=n-1;
            while(l<h){
                if(nums[l]+nums[h]==-nums[i]){
                    ans.push_back({nums[l],nums[h],nums[i]});
                    l++;
                    h--;
                    while(l<h && nums[l]==nums[l-1]) l++;
                }else if(nums[l]+nums[h] < -nums[i]){
                    l++;
                }else{
                    h--;
                }
            }
        }
        return ans;
    }
};
