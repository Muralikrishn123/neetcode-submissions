class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        int l=0,h=n-1;
        int ans=0;
        int lm=height[0],rm=height[n-1];
        while(l<h){
            if(lm<rm){
                l++;
                lm=max(lm,height[l]);
                ans+=lm-height[l];
            }else{
                h--;
                rm=max(rm,height[h]);
                ans+=rm-height[h];
            }
        }
    return ans;

    }
};
