class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
        unordered_map<int,int>idxs;
        vector<vector<int>>res;
        int i=0,j=0;
        int n=nums1.size(),m=nums2.size();
        while(i<n||j<m){
            if(j==m||(i<n&&nums1[i][0]<nums2[j][0])){
             
                if(idxs.count(nums1[i][0])){
                    res[idxs[nums1[i][0]]][1]+=nums1[i][1];
                }
                else{
                    res.push_back(nums1[i]);
                    idxs[nums1[i][0]]=res.size()-1;
                }
                i++;
            }
            else if(i==n||j<m&&(nums1[i][0]>=nums2[j][0])) {
                if(idxs.count(nums2[j][0])){
                    res[idxs[nums2[j][0]]][1]+=nums2[j][1];
                }
                else{
                    res.push_back(nums2[j]);
                    idxs[nums2[j][0]]=res.size()-1;
                }
                j++;
            }
        }
        return res;
        
    }
};