class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int bestsum = nums[0];
        int currsum=nums[0];
        for(int i=1;i<nums.size();i++){
            currsum=currsum+nums[i];
            if(nums[i]>currsum){
                currsum=nums[i];
            }
            
           if(bestsum<currsum){
            bestsum=currsum;
           }

        }
        return bestsum;
    }
};