class Solution {
    int mod=1000000007;
    int rec(int n,vector<vector<vector<int>>>&dp,int i=0,int l=0,int a=0){
        if(l==3||a==2)return 0;
        if(i==n)return 1;
        if(dp[a][l][i]!=-1)return dp[a][l][i];
        int A=rec(n,dp,i+1,0,a+1)%mod;
        int L=rec(n,dp,i+1,l+1,a)%mod;
        int P=rec(n,dp,i+1,0,a)%mod;
        dp[a][l][i]=((A+L)%mod+P)%mod;
        return dp[a][l][i]%mod;
    }
public:
    int checkRecord(int n) {
        vector<vector<vector<int>>>dp(2,vector<vector<int>>(3,vector<int>(n,-1)));
        return rec(n,dp);
    }
};