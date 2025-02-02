class Solution {
public:
    bool check(vector<int>& nums) {
    int n=nums.size();
    int cnt=0;
    for(int i=1;i<n*2;i++){
       if(nums[i%n]<nums[(i-1)%n])cnt++;
    }
    return cnt<=2;

    }
};