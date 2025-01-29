class Solution {

    bool dfs(vector<vector<int>>&graph,int i,int target,vector<bool>&visited){
        if(visited[i])return false;
        if(i==target)return true;
        visited[i]=true;
        for(int j=0;j<graph[i].size();j++){
            if(dfs(graph,graph[i][j],target,visited)) return true;
        }
        return false;
    }
public:
    vector<bool> checkIfPrerequisite(int numCourses, vector<vector<int>>& prerequisites, vector<vector<int>>& queries) {
        vector<vector<int>>graph(numCourses);
        vector<bool>res(queries.size(),false);
        
        for(auto&edge:prerequisites)  
            graph[edge[0]].push_back(edge[1]);

            for(int i=0;i<queries.size();i++){
                vector<bool>visited(numCourses,false);
                res[i]=dfs(graph,queries[i][0],queries[i][1],visited);
            }
            return res;
    }
};