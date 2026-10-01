class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n = strs.size();
        unordered_map<string,vector<string>>m;

        for(auto& x : strs){
            string a = x;
            sort(a.begin(),a.end());
            m[a].push_back(x);
            
        }
        vector<vector<string>>a;
        for(auto& x: m){
            a.push_back(x.second);
        }
        return a;
    }
};
