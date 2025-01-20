class Solution {
public:
    int firstCompleteIndex(vector<int>& arr, vector<vector<int>>& mat) {
        int n=mat.size();
        int m=mat[0].size();
        vector<int>rows(n,0);
        vector<int>cols(m,0);
        
        unordered_map<int,pair<int,int>>locs;
         unordered_set<int> quries;
        for(auto&a:arr)quries.insert(a);
        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++)
                if(quries.count(mat[i][j]))locs[mat[i][j]]=pair<int,int>({i,j});

        for(int i=0;i<arr.size();i++){
            rows[locs[arr[i]].first]++;
            cols[locs[arr[i]].second]++;
            if(rows[locs[arr[i]].first]==m||cols[locs[arr[i]].second]==n){ 
                return i;
                }
        }
        return -1;    

    }
};