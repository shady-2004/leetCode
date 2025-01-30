class Solution {
    void sp(int n,vector<vector<int>>& edges, int src, int dst, int k,vector<int>&dist){
        for(int i=0;i<=k;i++){
            vector<int>temp(dist);
            for(auto&edge:edges){
                if(dist[edge[0]]!=INT_MAX&&dist[edge[0]]+edge[2]<temp[edge[1]])
                    temp[edge[1]]=dist[edge[0]]+edge[2];
            }
            dist=temp;
        }
    }
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
        vector<int>dist(n,INT_MAX);
        dist[src]=0;
        sp(n,flights,src,dst,k,dist);
        return dist[dst]!=INT_MAX?dist[dst]:-1;
    }
};