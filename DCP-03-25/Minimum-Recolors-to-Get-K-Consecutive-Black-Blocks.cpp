class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int r=k;
        int c=count(blocks.begin(),blocks.begin()+k,'B');
        int res=k-c;
        while(r<blocks.size()){
            c-=blocks[r-k]=='B';
            c+=blocks[r++]=='B';
            res=min(res,k-c);
        }
    return res;
    }
};