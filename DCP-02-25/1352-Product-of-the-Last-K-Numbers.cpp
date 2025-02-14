class Solution {
    int findNext(vector<vector<int>>&jobs,int i){
        int target=jobs[i][1];
        int s=i+1;
        int ed=jobs.size()-1;
        int ans=jobs.size();
        while(s<=ed){
            int m=(ed+s)/2;
            if(jobs[m][0]>=target){
                ed=m-1;
                ans=m;
            }
            else{
                s=m+1;
            }
        }
        return ans;
    }
    int rec(vector<vector<int>>&jobs, vector<int>&dp,int i=0){
        if(i==jobs.size())return 0;
        if(dp[i]!=-1)return dp[i];
 
        int next=findNext(jobs,i);
        int take=jobs[i][2]+rec(jobs,dp,next);
        int dont=rec(jobs,dp,i+1);
        dp[i]=max(take,dont);

        return dp[i];  
    }
public:
    int jobScheduling(vector<int>& startTime, vector<int>& endTime, vector<int>& profit) {
        vector<int>dp(startTime.size(),-1);
        vector<vector<int>>jobs;
        for (int i = 0; i < startTime.size(); i++) {
            jobs.push_back({startTime[i], endTime[i], profit[i]});
        }
        sort(jobs.begin(),jobs.end());
     
        return rec(jobs,dp);
    }
};