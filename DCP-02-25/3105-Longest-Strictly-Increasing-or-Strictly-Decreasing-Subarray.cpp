class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int inc=1;
        int longestInc=0;
        int dec=1;
        int longestDec=0;
        for(int i=1;i<nums.size();i++){
            if(nums[i]>nums[i-1])inc++;
            else {
            longestInc=max(inc,longestInc);
            inc=1;
            }
            if(nums[i]<nums[i-1])dec++;
            else{
            longestDec=max(dec,longestDec);
            dec=1;
            }
        }
          longestDec=max(dec,longestDec);
        longestInc=max(inc,longestInc);

        return max(longestDec,longestInc);
    }
};