class Solution {
    int sumDigits(int num){
        int res=0;
        while(num){
            res+=num%10;
            num/=10;
        }
        return res;
    }
public:
    int maximumSum(vector<int>& nums) {
        int res=INT_MIN;
        unordered_map<int,int>sums;
        int cur;
        int sum;
        for(auto&num:nums){
            sum=sumDigits(num);
            if(sums.find(sum)!=sums.end()){
                cur=sums[sum];
               res=max(cur+num,res);
                sums[sum]=max(num,cur);
            }
            else sums[sum]=num;
        }
        return res==INT_MIN?-1:res;
    }
};
