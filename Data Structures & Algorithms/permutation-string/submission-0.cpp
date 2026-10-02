class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n = s1.size();
        int m = s2.size();
        vector<int>a1(26,0),a2(26,0);

        if(n > m)return false;
        for(char x : s1){
            a1[x-'a']++;
        }

        for(int i=0;i<n;i++){
            a2[s2[i]-'a']++;
        }
        
        if(a1==a2)return true;
        int l = 0;
        for(int i=n;i<m;i++){

            a2[s2[l++]-'a']--;
            a2[s2[i]-'a']++;
            if(a1==a2)return true;

        }
        return false;
    }
};
