class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<int>tru(n+1,0);
        vector<bool>t(n+1,false);
        for(auto&a:trust){
            tru[a[1]]++;
            t[a[0]]=true;
        }
        for(int i=1;i<=n;i++){
            if(tru[i]==n-1&&!t[i])return i;
        }
        return -1;

    }
};