class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int>res(nums.size(),pivot);
        int less=0,greater=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<pivot)less++;
            else if(nums[i]>pivot)greater++;
        }
        int k=0,j=(nums.size()-less-greater)+less;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<pivot){
                res[k]=nums[i];
                k++;}
            else if(nums[i]>pivot){
                res[j]=nums[i];
                j++;
            }
        }
        return res;
    }
};