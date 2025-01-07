#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;


int rec(vector<int>& arr, vector<unordered_map<int,int>>&dp, int i = 0, int prev = INT_MIN) {
    if (i == arr.size())return 1;
    if(dp[i].count(prev))return dp[i][prev];
    int acc = 0;
    int res = 0;
    for (int z = i; z < arr.size(); z++) {
        acc += arr[z];
        if (acc >= prev) {
            res += rec(arr,dp,z + 1, acc);
        }
    }
    dp[i][prev] = res;
    return res;
}

int main() {
    int n;
    cin >> n;
    vector<int>arr(n);
    for (auto& a : arr)cin >> a;
    vector<unordered_map<int,int>>dp(n ,unordered_map<int,int>());
    cout << rec(arr,dp);
    return 0;
}