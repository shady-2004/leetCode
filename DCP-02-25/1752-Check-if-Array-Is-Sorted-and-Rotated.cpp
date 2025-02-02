class Solution {
public:
    bool check(vector<int>& nums) {
    int n=nums.size();
    for(int i=0;i<n*2;i++){
        int j=i;
        while(j<n*2-1&&nums[j%n]<=nums[(j+1)%n])j++;
        if(j-i+1==n)return true;
    }
    return false;

    }
};