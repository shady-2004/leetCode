#include<iostream>
#include<vector>
using namespace std;

int solve(vector<int>&arr,vector<vector<int>>&dp,int&k,int i=0,int j=0){
    if(i==arr.size()){
      if(j!=k) return INT_MIN;
      return 0;
    }
    if(j==k-1){
      int m=INT_MAX;
      for(int z=i;z<arr.size();z++)m=min(m,arr[z]);
      return m;
    }
    if(dp[i][j]!=-1)return dp[i][j];
    int cur=INT_MAX;
    int res=INT_MIN;

    for(int z=i;z<arr.size();z++){
        cur=min(cur,arr[z]);
        int calc=solve(arr,dp,k,z+1,j+1);
        if(calc==INT_MIN) continue;
        res=max(res,cur+calc);
    }

    dp[i][j]=res;
    return res;
}

int main(){
    int n,k;
    cin>>n>>k;
    vector<int>arr(n);
    for(auto&a:arr)cin>>a;
    vector<vector<int>>dp(n,vector<int>(k+1,-1));
    cout<<solve(arr,dp,k);
    return 0;
}