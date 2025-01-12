class Solution {
    int rec(vector<int>& cuts, unordered_map<int, unordered_map<int, int>>& dp, int st, int ed) {
        if (dp.count(st) && dp[st].count(ed)) return dp[st][ed]; 
        dp[st][ed] = INT_MAX;  
        
        for (int c : cuts) {
            if (c <= st || c >= ed) continue; 
            int left = rec(cuts, dp, st, c);   
            int right = rec(cuts, dp, c, ed);
            

            int total = left;
             total += right;

            dp[st][ed] = min(dp[st][ed], total);
        }

  
        if (dp[st][ed] == INT_MAX) dp[st][ed] = 0;
        else dp[st][ed] += ed - st;

        return dp[st][ed];
    }

public:
    int minCost(int n, vector<int>& cuts) {
        sort(cuts.begin(), cuts.end());  
        unordered_map<int, unordered_map<int, int>> dp;  
        return rec(cuts, dp, 0, n);  
    }
};
