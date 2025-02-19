class Solution {
    bool rec(string& cur,int n,int k,int &cnt,int i=0,char prev='z'){
        if(i==n){
            cnt++;
           return cnt==k;
        }

        for(int j=0;j<=2;j++){
            if('a'+j==prev)continue;
            cur+=('a'+j);
            if(rec(cur,n,k,cnt,i+1,'a'+j))return true;
            cur.pop_back();
        }
        return false;
    }
public:
    string getHappyString(int n, int k) {
        int cnt=0;
        string cur;
        rec(cur,n,k,cnt);
        if(cnt<k)return "";
        return cur;
    }
};