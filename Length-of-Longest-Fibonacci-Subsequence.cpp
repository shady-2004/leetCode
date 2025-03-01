class Solution {
public:
    int lenLongestFibSubseq(vector<int>& arr) {
        int longest=0;
        unordered_map<int,int>idxs;
        vector<vector<int>>dp(arr.size(),vector<int>(arr.size(),2));

        for(int i=0;i<arr.size();i++)idxs[arr[i]]=i;
        for(int i=2;i<arr.size();i++){
            for(int j=i-1;j>=0;j--){
            int l=0;
                if(idxs.count(arr[i]-arr[j])&&idxs[arr[i]-arr[j]]<j){
                            l=dp[j][idxs[arr[i]-arr[j]]]+1;
                    }
                    
            dp[i][j]=max(dp[i][j],l);
            longest=max(longest, dp[i][j]);
                }
            }
        
        return longest>=3?longest:0;
    }
};

