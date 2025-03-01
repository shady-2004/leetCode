class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        vector<int>res(nums.size(),0);
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]==nums[i+1]){
                nums[i]=nums[i+1]*2;
                nums[i+1]=0;
                i++;
            }
            else nums[i]=nums[i];
        }
        int j=0;
        for(int i=0;i<nums.size();i++)
        if(nums[i]!=0){
            res[j]=nums[i];
            j++;
        }
        return res;
    }
};