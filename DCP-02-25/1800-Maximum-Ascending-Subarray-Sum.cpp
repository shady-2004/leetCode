class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
       int maxAsc=nums[0];
       int cur=nums[0];
       for(int i=1;i<nums.size();i++){
            if(nums[i]>nums[i-1])cur+=nums[i];
            else {
                maxAsc=max(maxAsc,cur);
                cur=nums[i];
            }
       }
         maxAsc=max(maxAsc,cur);

       return maxAsc; 
    }
};