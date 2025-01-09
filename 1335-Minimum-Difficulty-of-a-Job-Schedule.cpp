class Solution {
    int rec(vector<int>& jobDiff,  vector<vector<int>>&dp,int&d,int i=0,int j=0){
        if(i==jobDiff.size()){
            if(j!=d)return INT_MAX;
            return 0; 
        }
        if(j==d-1)return *max_element(i+jobDiff.begin(),jobDiff.end());
        if(dp[i][j]!=-1)return dp[i][j];
        int res=INT_MAX;
        int cur=INT_MIN;
        for(int z=i;z<jobDiff.size();z++){
            cur=max(cur,jobDiff[z]);
            int calc=rec(jobDiff,dp,d,z+1,j+1);
            if(calc==INT_MAX)continue;
            res=min(res,cur+calc);
        }
        dp[i][j]=res;
        return res;
    }
public:
    int minDifficulty(vector<int>& jobDifficulty, int d) {
        vector<vector<int>>dp(jobDifficulty.size(),vector<int>(d,-1));
        if(d>jobDifficulty.size())return -1;
        return rec(jobDifficulty,dp,d);
    }
};