class Solution {
public:
    long long mostPoints(vector<vector<int>>& questions) {
        vector<long long>dp(questions.size(),0);
        long long res=LLONG_MIN;
        for(int i=questions.size()-1;i>=0;i--){
            dp[i]+=questions[i][0];

            if(i+questions[i][1]+1<questions.size())
                dp[i]+=dp[i+questions[i][1]+1];
            
            res=max(dp[i],res);
            dp[i]=res;
        }
        return res;
    }
};