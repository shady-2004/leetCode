class Solution {
    int rec(int n,vector<int>&dp){
        if(n<=2)return 1;
        if(dp[n]!=-1)return dp[n];
        int res=1;

        for(int i=1;i<n;i++){
            res=max({res,i*rec(n-i,dp),i*(n-i)});
        }
        return dp[n]=res;
        
    }
public:
    int integerBreak(int n) {
       vector<int>dp(n+1,-1);
        return rec(n,dp);
    }
};