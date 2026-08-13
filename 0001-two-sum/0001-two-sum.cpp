class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> ts;
        for(int i=0; i<nums.size();i++){
            int reqd = target - nums[i];
            if(ts.find(reqd)!= ts.end()){
                return {ts[reqd],i};
            }
          ts[nums[i]]= i;  
        }
        return {};
    }
};