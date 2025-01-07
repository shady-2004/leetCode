class Solution {
    int rec(vector<int>& arr,vector<int>&dp,int&k,int i=0){
        if(arr.size()==i)return 0;
        if(dp[i]!=-1)return dp[i];
        int curMax=INT_MIN;
        int res=INT_MIN;
        int cnt=0;
        for(int z=i;(z<i+k)&&z<arr.size();z++){
            cnt++;
            curMax=max(curMax,arr[z]);
            res=max(res,curMax*cnt+rec(arr,dp,k,z+1));
        }
        dp[i]=res;
        return res;
    }
public:
    int maxSumAfterPartitioning(vector<int>& arr, int k) {
       vector<int>dp(arr.size(),-1);
       return rec(arr,dp,k);
    }
};