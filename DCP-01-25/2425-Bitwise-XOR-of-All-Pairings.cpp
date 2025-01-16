class Solution {
public:
    int xorAllNums(vector<int>& nums1, vector<int>& nums2) {
        int nums2Xor=0;
        if(nums1.size()%2)
        for(auto&num:nums2)nums2Xor=nums2Xor^num;
        int res=0;
        if(nums2.size()%2)
        for(auto&num:nums1)res=res^(num^nums2Xor);
        else res=nums2Xor;
        return res;
    }
};