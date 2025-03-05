class Solution {
    bool dfs(vector<vector<int>>&graph,vector<bool>&visited,int destination,int i){
        visited[i]=true;
        for(int j=0;j<graph[i].size();j++){
            if(visited[graph[i][j]])continue;
            if(graph[i][j]==destination||dfs(graph,visited,destination,graph[i][j])) return true;
        }
        return false;
    }
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        if(source==destination)return true;
        vector<vector<int>>graph(n);
        for(auto&edge:edges){
            graph[edge[0]].push_back(edge[1]);
            graph[edge[1]].push_back(edge[0]);
        }
        vector<bool>visited(n,false);
        return dfs(graph,visited,destination,source);

    }
};