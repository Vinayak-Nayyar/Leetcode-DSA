class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> freq;
        
        for(char c : s){
            freq[c]++;
        }
        for(char q : t){
            freq[q]--;
        }
        for(auto x : freq){
            if(x.second!=0){
                return false;
            }
            else return true;
        }
        return {};
    }
};