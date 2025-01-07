class Solution {
        int rec (vector<vector<vector<int>>>&dp,vector<int>& prices,int i=0,int canB=true,int k=0){
            if(i==prices.size()||k==2)return 0;
            if(dp[canB][k][i]!=-1)return dp[canB][k][i];
            int res=INT_MIN;
            if(canB){
                res=rec(dp,prices,i+1,!canB,k)-prices[i];
            }
            else {
                res=rec(dp,prices,i+1,!canB,k+1)+prices[i];
            }
            res=max(res,rec(dp,prices,i+1,canB,k));
            dp[canB][k][i]=res;
            return res;
        }
public:
    int maxProfit(vector<int>& prices) {
        vector<vector<vector<int>>>dp(2,vector<vector<int>>(2,vector<int>(prices.size(),-1)));
        return rec(dp,prices);
    }
};