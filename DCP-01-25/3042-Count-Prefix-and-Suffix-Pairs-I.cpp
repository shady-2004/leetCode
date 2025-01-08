class Solution {
    bool isPreAndSuff(string&s1,string&s2){
        bool pre=(s2.find(s1)==0);
        if(!pre)return false;
        bool suff=(s2.rfind(s1)==s2.size()-s1.size());
        return suff&&pre;
    }
public:
    int countPrefixSuffixPairs(vector<string>& words) {
        int cnt=0;
        for(int i=0;i<words.size();i++){
            for(int j=i+1;j<words.size();j++){
                if(words[i].size()>words[j].size())continue;
                cnt+=isPreAndSuff(words[i],words[j]);
            }
        }
        return cnt;
    }
};