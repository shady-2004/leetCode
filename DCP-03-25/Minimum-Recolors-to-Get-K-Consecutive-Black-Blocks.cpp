class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int l=0;
        int r=k;
        int c=count(blocks.begin(),blocks.begin()+k,'B');
        int res=k-c;
        while(r<blocks.size()){
            c-=blocks[l++]=='B';
            c+=blocks[r++]=='B';
            res=min(res,k-c);
        }
    return res;
    }
};