class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
         sort(s.begin(),s.end());
        sort(g.begin(),g.end());
        int cnt=0;
        int j=0;
        for(int a : g){
            while(j<s.size()){
                if(s[j]>=a){
                    cnt++;
                    j++;
                    break;
                }
                j++;
            }
        }
        return cnt;
    }
};