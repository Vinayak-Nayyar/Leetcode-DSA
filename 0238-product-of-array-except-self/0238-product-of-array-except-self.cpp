class Solution {
public:
    
    vector<int> productExceptSelf(vector<int>& nums) {
        int leftrunningproduct, rightrunningproduct;
        
        vector<int> answer;
        int prev=1;

        for(int i=0; i<nums.size();i++){
        leftrunningproduct =prev;
        answer.push_back(leftrunningproduct);
        prev= leftrunningproduct*nums[i];
        }
        int suffixproduct = 1;
        for(int i=nums.size()-1;i>=0;i--){
            answer[i]=answer[i]*suffixproduct;
            suffixproduct = suffixproduct*nums[i];
        }       
        

        return answer;
    }
};