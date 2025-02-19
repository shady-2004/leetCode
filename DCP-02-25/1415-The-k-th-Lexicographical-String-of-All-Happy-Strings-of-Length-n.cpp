class Solution {
    bool rec(string& cur, string& res,int n,int k,int &cnt,int i=0,char prev='z'){
        if(i==n){
            cnt++;
            if(cnt==k){
                res=cur;
                return true;
            }
            return false;
        }

        for(int j=0;j<=2;j++){
            if('a'+j==prev)continue;
            cur+=('a'+j);
            if(rec(cur,res,n,k,cnt,i+1,'a'+j))return true;
            cur.pop_back();
        }
        return false;
    }
public:
    string getHappyString(int n, int k) {
        int cnt=0;
        string res;
        string cur;
        rec(cur,res,n,k,cnt);
        if(cnt<k)return "";
        return res;
    }
};