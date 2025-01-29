class Solution {
    private:
    int find(unordered_map<int,int>&par,int x){
        int p=par[x];
        while(p!=par[par[p]])
            p=par[par[p]];
        return p;
    }
    bool unite(unordered_map<int,int>&par,unordered_map<int,int>&rank,int n1,int n2){
        int p1=find(par,n1),p2=find(par,n2);
        if(p1==p2)return false;
        if(rank[p1]>rank[p2])
            par[p2]=p1;
        else if(rank[p1]<rank[p2])
            par[p1]=p2;

        else{
            par[p2]=p1;
            rank[p1]++;
        }
        return true;
    }
public:
    vector<int> findRedundantConnection(vector<vector<int>>& edges) {
        unordered_map<int,int>par;
        unordered_map<int,int>rank;
        for(int i=1;i<=edges.size();i++){
            par[i]=i;
            rank[i]=0;
        }
        int x,y;
        for(auto a:edges){
           if(!unite(par,rank,a[0],a[1])) {
            x=a[0];
            y=a[1];
           } 
        }
        return {x,y};
    }
};