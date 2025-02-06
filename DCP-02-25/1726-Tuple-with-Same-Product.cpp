class Solution {
  
public:
    int tupleSameProduct(vector<int>& nums) {
        int count=0;
        unordered_map<int,int>freq;
        for(int i=0;i<nums.size();i++)
            for(int j=0;j<nums.size();j++){
                if(j==i)continue;
                freq[nums[i]*nums[j]]++;
            }

        for(auto&[_,c]:freq){
            if(c>=4)count+=(c-2)*c;
        }
            return count;
    }
};