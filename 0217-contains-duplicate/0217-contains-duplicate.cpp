class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> dup;
        dup.reserve(nums.size());
        for (int i = 0; i < nums.size(); i++) {
            int duplicate = nums[i];
            if (dup.find(duplicate) != dup.end()) {
                bool answer = true;
                return answer;
            } else {
                dup.insert(nums[i]);
            }
        }
        return {};
    }
};