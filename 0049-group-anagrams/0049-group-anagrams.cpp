class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> ga;
        vector<vector<string>> ans;
       for(auto x:strs){
        string key= x;
        sort(key.begin(),key.end());
        ga[key].push_back(x);
       }
       for(auto c:ga){
        ans.push_back(c.second);
       }
       return ans;
    }
};