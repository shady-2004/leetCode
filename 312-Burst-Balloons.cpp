class Solution {
    int rec(vector<int>& nums, vector<vector<int>>&dp,int i,int j){
        if(j-i==1)return 0;
        if(dp[i][j]!=-1)return dp[i][j];
        int res=0;
        for(int z=i+1;z<j;z++){
            res=max(res,nums[i]*nums[z]*nums[j]+rec(nums,dp,i,z)+rec(nums,dp,z,j));
        }
        dp[i][j]=res;
        return res;
    }

public:
    int maxCoins(vector<int>& nums) {
        nums.push_back(1);
        nums.insert(nums.begin(),1);
        int n=nums.size();
        vector<vector<int>>dp(n+1,vector<int>(n+1,-1));
        return rec(nums,dp,0,n-1);
    }
};