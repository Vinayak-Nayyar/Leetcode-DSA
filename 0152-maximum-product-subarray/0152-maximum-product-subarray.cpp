class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxcurrentproduct= nums[0];
        int mincurrentproduct= nums[0];
        // int currproduct=nums[0];
        int bestproduct=nums[0];

        for(int i=1;i<nums.size();i++){
        //   currproduct=currproduct*nums[i];
          
         int currentmax= max({nums[i],nums[i]*mincurrentproduct,nums[i]*maxcurrentproduct});
        int currentmin= min({nums[i],nums[i]*mincurrentproduct,nums[i]*maxcurrentproduct});
        mincurrentproduct=currentmin;
        maxcurrentproduct=currentmax;
        
        
          if(bestproduct<maxcurrentproduct){
            bestproduct=maxcurrentproduct;
          }
        }
        return bestproduct;
    }
};