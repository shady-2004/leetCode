class Solution {
public:
    bool checkPowersOfThree(int n) {
        int power=pow(3,14);
        while(n>0&&power>0){
            if(power<=n){
                n-=power;
            }
            power/=3;
        }
        return n==0;
    }
};