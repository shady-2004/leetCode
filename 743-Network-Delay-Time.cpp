class Solution {
    void bellmanFord(int n,vector<int>&dist,vector<vector<int>>& edges){
        for(int i=0;i<n-1;i++){
            for(auto&edge:edges)
                if(dist[edge[0]]!=INT_MAX&&dist[edge[0]]+edge[2]<dist[edge[1]])dist[edge[1]]=dist[edge[0]]+edge[2];
        }
    }
  
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        vector<int>dist(n+1,INT_MAX);
        dist[k]=0;
        bellmanFord(n,dist,times);
        int res=0;
        for(int i=1;i<dist.size();i++){
            if(dist[i]==INT_MAX)return -1;
            else res=max(dist[i],res);
        }
        return res;
    }
};