class Solution {
  
public:
    int tupleSameProduct(vector<int>& nums) {
        int count=0;
        unordered_map<int,int>freq;
        for(int i=0;i<nums.size();i++)
            for(int j=i+1;j<nums.size();j++){
                freq[nums[i]*nums[j]]++;
            }

        for(auto&[_,c]:freq){
            count+=c>=2?(c-1)*c:0;
        }
            return count*4;
    }
};