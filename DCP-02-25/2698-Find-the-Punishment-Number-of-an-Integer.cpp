class Solution {

    bool rec(int k,int n,int sum=0){
        if(k==0)    return sum==n;
        int MOD=10;
        while(k>=MOD/10){
            if(rec(k/MOD,n,sum+k%MOD))return true;
            MOD*=10;
        }
        return false;
    }   
public:
    int punishmentNumber(int n) {
        int res=0;
        for(int i=1;i<=n;i++)
            if(rec(i*i,i))res+=i*i;
        return res;
    }
};