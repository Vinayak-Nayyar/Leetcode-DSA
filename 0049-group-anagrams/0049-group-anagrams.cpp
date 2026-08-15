class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> ga;
        vector<vector<string>> ans;
        for( auto c:strs){
            string key=c;
            sort(key.begin(),key.end());
            ga[key].push_back(c);
        }
        for (auto x : ga){
            ans.push_back(x.second);
        }
        return ans;
    }
};