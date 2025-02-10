class Solution {
public:
    int minChanges(string s) {
        int l=0,c=0;
        for(int i=1;i<s.size();i++)
           if(s[i]!=s[i-1])
                if((i-l)%2){
                    c++;
                    l=i+1;
                }
                else 
                l=i;
        
        return c;
    }
};