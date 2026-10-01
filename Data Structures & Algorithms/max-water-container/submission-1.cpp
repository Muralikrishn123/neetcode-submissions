class Solution {
public:
    int maxArea(vector<int>& heights) {
        int ans = INT_MIN;
        int  n = heights.size();
        int l=0,h=n-1;

        while(l<h){
             int x = min(heights[l],heights[h])*(h-l);
                ans = max(ans,x);
            if(heights[l] <= heights[h]){
               
                l++;
            }else{
                
                h--;
            }
        }
        return ans;
    }
};
