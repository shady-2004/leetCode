class Solution {
    int rec(vector<vector<int>>&dp,vector<int>& prices,int i=0,bool canB=true){
        if(i==prices.size())return 0;
        if(dp[canB][i]!=-1)return dp[canB][i];
        int res;
        if(canB){
            res=rec(dp,prices,i+1,!canB)-prices[i];
        }
        else{
            res=rec(dp,prices,i+1,!canB)+prices[i];
        }
        res=max(res,rec(dp,prices,i+1,canB));
        dp[canB][i]=res;
        return res;
    }
public:
    int maxProfit(vector<int>& prices) {
        vector<vector<int>>dp(2,vector<int>(prices.size(),-1));
        return rec(dp,prices);
    }
};