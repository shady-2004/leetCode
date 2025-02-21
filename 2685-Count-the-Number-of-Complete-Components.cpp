class Solution {
    bool Union(int a,int b,vector<int>&parent,vector<int>&rank){
        int para=dad(a,parent);
        int parb=dad(b,parent);
        if(para==parb)return false;
        if(rank[para]>rank[parb])
        {
            parent[parb]=para;
            rank[para]++;
        }
        else{
            parent[para]=parb;
            rank[parb]++;
        }
        return true;
    }
    int dad(int a,vector<int>&parent){
        if(a==parent[a])return a;
        parent[a]=dad(parent[a],parent);
        return parent[a];
    }
public:
    int countCompleteComponents(int n, vector<vector<int>>& edges) {
        vector<int>parent(n);
        vector<int>rank(n,0);
        unordered_map<int,int>cntNodes;
        unordered_map<int,int>edgesNodes;

        for(int i=0;i<n;i++)parent[i]=i;
        for(auto &edge:edges)Union(edge[0],edge[1],parent,rank);
        for(auto&p:parent)cntNodes[p]++;
        for(auto &edge:edges)edgesNodes[parent[edge[0]]]++;
        int res=0;
        for(auto&[p,c]:cntNodes){
            if((cntNodes[p])*(cntNodes[p]-1)/2==edgesNodes[p]) res++;
        }
        return res;

    }

};
