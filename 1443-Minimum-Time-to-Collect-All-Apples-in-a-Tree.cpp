class Solution {
    int dfs(int i, vector<vector<int>>& tree, vector<bool>& hasApple,vector<bool>& visit,int path=0){
        if(visit[i])return 0;
        int collected=0;

        int time=0;

        visit[i]=true;

        for(int j=0;j<tree[i].size();j++){
            int res=dfs(tree[i][j],tree,hasApple,visit,path+1);
            time+=res;
            if(res)collected++;
        }
        if(collected)return time-((collected-1)*path);
        else if(hasApple[i])return path;
        return 0;
    }
public:
    int minTime(int n, vector<vector<int>>& edges, vector<bool>& hasApple) {
        vector<bool>visit(n,false);
        vector<vector<int>>tree(n);
        for(int i=0;i<n-1;i++){
            tree[edges[i][1]].push_back(edges[i][0]);
            tree[edges[i][0]].push_back(edges[i][1]);
        }
        return dfs(0,tree,hasApple,visit)*2;
    }
};