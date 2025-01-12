class Solution {
int dfs(vector<vector<int>>& matrix,vector<vector<int>>&dp,int&n,int&m,int&res,int i,int j){
    if(i==n||j==m||matrix[i][j]==0)return 0;
    if(dp[i][j]!=-1)return dp[i][j];
    int r=dfs(matrix,dp,n,m,res,i,j+1);
    int d=dfs(matrix,dp,n,m,res,i+1,j);
    int v=dfs(matrix,dp,n,m,res,i+1,j+1);
    if(r==d&&d==v){
        dp[i][j]=r+1;
    }
    else{
        dp[i][j]=min({r,d,v})+1;
    }
    res+=dp[i][j];
    return dp[i][j];

}
public:
    int countSquares(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        vector<vector<int>>dp(n,vector<int>(m,-1));
        int res=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                dfs(matrix,dp,n,m,res,i,j);
            }
        }
        return res;
    }
};