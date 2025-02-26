class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int sub=nums[nums.size()-1];
       int Max=sub;
       for(int i=nums.size()-2;i>=0;i--){
            sub=max(sub+nums[i],nums[i]);
            Max=max(Max,sub);
       }
       sub=nums[0];
       int MIN=nums[0];
       for(int i=1;i<nums.size();i++){
        sub=min(sub+nums[i],nums[i]);
        MIN=min(MIN,sub);
       }
       return max(abs(Max),abs(MIN));
    }
};