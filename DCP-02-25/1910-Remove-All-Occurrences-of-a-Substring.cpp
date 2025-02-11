class Solution {
public:
    string removeOccurrences(string s, string part) {
        int i=s.find(part);
       while(i!=string::npos){
        s.erase(i,part.size());
        i=s.find(part);
       }
       return s;
    }
};