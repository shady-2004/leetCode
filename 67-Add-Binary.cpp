class Solution {
public:
    string addBinary(string a, string b) {
      string res=\\;
        bool rem=0;
        int i=a.size()-1;
        int j=b.size()-1;
        while(i>=0||j>=0){
            bool x,y;
            x=i>=0?a[i]-48:0;
            y=j>=0?b[j]-48:0;
            res+=char((x^y^rem)+48);
            rem=(x+y+rem>=2);
            i--;
            j--;
        }
        if(rem)res+='1';
        reverse(res.begin(), res.end());
        return res; 
    }
};