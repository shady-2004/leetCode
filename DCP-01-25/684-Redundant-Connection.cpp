class Solution {
    bool onion(int x,int y,vector<int>&parent, vector<int>&rank){
        if(dad(x,parent)==dad(y,parent)) return false;
        int parX=dad(x,parent);
        int parY=dad(y,parent);
        if(rank[parX]>rank[parY]){
            parent[parY]=parX;
            rank[parX]+=rank[parY];
        }
        else{
             parent[parX]=parY;
            rank[parY]+=rank[parX];
        }
        return true;
    }
    int dad(int x,vector<int>&parent){
        if(parent[x]==x)return x;
        parent[x]=dad(parent[x],parent);
        return parent[x];
    }

public:
    vector<int> findRedundantConnection(vector<vector<int>>& edges) {
      vector<int>parent(edges.size()+1);
      vector<int>rank(edges.size()+1,0);
             for(int i=1;i<edges.size()+1;i++)
                 parent[i]=i;
    
        for(auto&edge:edges){
            if(!onion(edge[0],edge[1],parent,rank))
                return {edge[0],edge[1]};
        }

        return {-1,-1};
    }
};