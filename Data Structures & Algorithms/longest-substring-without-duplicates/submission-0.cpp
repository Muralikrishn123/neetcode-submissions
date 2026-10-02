class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        int ans = 0;
        unordered_map<char,int>m;
        int l =0;
        for(int i=0;i<n;i++){

            while( m.find(s[i])!=m.end() && m[s[i]]>0){
                m[s[l]]--;
                if(m[s[l]]==0)m.erase(m[s[l]]);
                l++;
            }
            m[s[i]]++;
            ans = max(ans,i-l+1);
        }

        return ans;
    }
};
