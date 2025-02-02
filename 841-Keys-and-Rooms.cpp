class Solution {
    int dfs(int i,vector<vector<int>>& edges, vector<bool>&visited){
        if(visited[i])return 0;
        int cnt=0;
        visited[i]=true;
        for(auto&a:edges[i])cnt+=dfs(a,edges,visited);
        return cnt+1;
    }
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        vector<bool>visited(rooms.size(),false);
        return dfs(0,rooms,visited)==rooms.size();
    }
};