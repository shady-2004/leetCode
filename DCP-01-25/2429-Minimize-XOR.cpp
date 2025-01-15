class Solution {
    int onesCnt(int num){
        int res=0;
        while(num){
            res+=num%2;
            num/=2;
        }
        return res;
    }
    void one(int num,vector<int>&ones){
        int i=0;
        while(num){
            if(num%2)ones.push_back(i);
            num/=2;
            i++;
        }
    }
public:
    int minimizeXor(int num1, int num2) {
        vector<int>ones;
        int cnt=onesCnt(num2);
        one(num1,ones);
        int res=0;
        for(int i=ones.size()-1;i>=0;i--){
            if(cnt) res=res|int(pow(2,ones[i]));
            else break;
            cnt--;
        }
        int i=0;
        while(cnt){
            int crnt=pow(2,i);
            if(!(crnt&res)){
                res=res|crnt;
                cnt--;
            }
         i++;
        }
        return res;
    }
};