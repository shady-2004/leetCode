class Solution {
    bool onion(int x,int y,vector<int>&parent,vector<int>&rank){
        int dadX=dad(x,parent);
        int dadY=dad(y,parent);
        if(dadX==dadY)return false;
        if(rank[dadX]>rank[dadY]){
            parent[dadY]=parent[dadX];
            rank[dadX]+=rank[dadY];
            }
            else{
                parent[dadX]=parent[dadY];
            rank[dadY]+=rank[dadX];
            }
            return true;

    }
    int dad(int x,vector<int>&parent){
        if(x==parent[x])return x;
        parent[x]=dad(parent[x],parent);
        return parent[x];
    }
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
          vector<int>parent(isConnected.size());
            vector<int>rank(isConnected.size(),0);
            unordered_set<int>parents;
             for(int i=0;i<isConnected.size();i++)
                 parent[i]=i;
        for(int i=0;i<isConnected.size();i++){
            for(int j=i+1;j<isConnected.size();j++){
                if(isConnected[i][j])
                    onion(i,j,parent,rank);
            }
        }
        for(int i=0;i<isConnected.size();i++)dad(i,parent);
        for(auto&a:parent)parents.insert(a);
        return parents.size();
    }
};