class Solution {
public:
    vector<int> queryResults(int limit, vector<vector<int>>& queries) {
        vector<int>res(queries.size());
        unordered_map<int,int>freq;
        unordered_map<int,int>colors;
        int numColors=0;
        for(int i=0;i<queries.size();i++){
            if(colors.count(queries[i][0])){
                freq[colors[queries[i][0]]]--;
                if(freq[colors[queries[i][0]]]==0){
                    numColors--;
                    freq.erase(colors[queries[i][0]]);
                }
                 if(!freq.count(queries[i][1]))numColors++;
                freq[queries[i][1]]++;
                colors[queries[i][0]]=queries[i][1];
            }
            else{
                colors[queries[i][0]]=queries[i][1];
                if(!freq.count(queries[i][1]))numColors++;
                freq[queries[i][1]]++;
            }
            res[i]=numColors;
        }
        return res;
    }
};