class Solution {
public:
    static bool compare(pair<int,int> o1,pair<int,int>o2){
       bool comesFirst= false;
       if(o1.second>o2.second){
       comesFirst= true;
       }
       return comesFirst;
    }
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> freq;
        vector<pair<int,int>> output;
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            freq[nums[i]]++;
        }
        for( auto x: freq){
            output.push_back(x);
        }
        sort(output.begin(),output.end(),compare);

        for(int i=0;i<k;i++){
            ans.push_back(output[i].first);
        }
        return ans;
    }
};