class Solution {
public:
    long long countBadPairs(vector<int>& nums) {
        long long good=0;
        unordered_map<int,long long>freq;
        for(int i=0;i<nums.size();i++)freq[nums[i]-i]++;
        for(auto&a:freq)good+=(a.second)*(a.second-1)/2;

        
        return ((nums.size()*(nums.size()-1))/2)-good;
    }
};