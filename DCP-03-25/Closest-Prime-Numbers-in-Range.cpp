class Solution {
    bool isPrime(int num){
        if(num==2||num==3)return true;
        if(num==1||num%2==0||num%3==0)return false;
        int x=sqrt(num);
        for(int i=5;i<=x;i+=2)
            if(num%i==0)return false;
        return true;
    }
public:
    vector<int> closestPrimes(int left, int right) {
      int s=-1,f=-1;
        vector<int>res(2,-1);
        for(int i=left;i<=right;i++){
            if(isPrime(i)){
                if(f==-1)f=i;
                else if(s==-1)s=i;
                else {
                        f=s;
                        s=i;
                }
            }
            if(res[0]==-1||res[1]==-1||res[1]-res[0]>s-f) {
                res[0]=f;
                res[1]=s;
            }
        }
        if(res[1]==-1)return {-1,-1};
        return res;
    }
};