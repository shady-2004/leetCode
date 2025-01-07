#include<iostream>
#include<vector>
using namespace std;


int rec(vector<int>& arr, int i = 0, int prev = INT_MIN) {
    if (i == arr.size())return 1;
    int acc = 0;
    int res = 0;
    for (int z = i; z < arr.size(); z++) {
        acc += arr[z];
        if (acc >= prev) {
            res += rec(arr, z + 1, acc);
        }
    }
    return res;
}

int main() {
    int n;
    cin >> n;
    vector<int>arr(n);
    for (auto& a : arr)cin >> a;
    cout << rec(arr);
    return 0;
}