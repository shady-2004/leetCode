class Solution {
public:
    string clearDigits(string s) {
        string res;
        for(int i=0;i<s.size();i++){
            if(s[i]-'0'>=0&&s[i]-'0'<10)
                res.pop_back();
            else res+=s[i];
        }
        return res;
    }
};