class Solution {
    bool gen(unordered_set<string>&s,string &cur,int n){
        if(cur.size()==n)
            return s.find(cur)==s.end();
           for(int i=0;i<2;i++){
            cur+=(i+'0');
            if(gen(s,cur,n)) return true;
            cur.pop_back();
           }
        return false;
    }
public:
    string findDifferentBinaryString(vector<string>& nums) {
        int n=nums.size();
        unordered_set<string>s(nums.begin(),nums.end());
        string cur="";
        gen(s,cur,n);
        return cur;
    }
};