class Solution {
    bool dfs(vector<bool>&bobPath,vector<int>&bobTime,vector<vector<int>>&tree,vector<bool>&visited,int i=0,int time=0){
        if(visited[i])return false;
        if(i==0)return true;
        visited[i]=true;
        for(auto&node:tree[i]){
            if(dfs(bobPath,bobTime,tree,visited,node,time+1)){
                bobTime[i]=time;
                bobPath[i]=true;
                visited[i]=false;
                return true;        
            }
        }
        visited[i]=false;
        return false;
    }

    int rec(vector<bool>&bobPath,vector<int>&bobTime,vector<vector<int>>&tree,vector<bool>&visited,vector<int>& amount,int i=0,int time=0){
        int score=0;
        if(bobPath[i]){
            if(bobTime[i]==time){
                score+=amount[i]/2;
            }
            else if (bobTime[i]>time)
                score+=amount[i];
        }
        else{
            score+=amount[i];
        }
        int cur=INT_MIN;
        visited[i]=true;
        for(auto&node:tree[i]){
            if(visited[node])continue;
            int res=rec(bobPath,bobTime,tree,visited,amount,node,time+1);
            cur=max(cur,res);
        }
        if(cur==INT_MIN)return score;
        return score+cur;
    }

public:
    int mostProfitablePath(vector<vector<int>>& edges, int bob, vector<int>& amount) {
        vector<vector<int>>tree(amount.size());
        for(auto&edge:edges){
            tree[edge[0]].push_back(edge[1]);
            tree[edge[1]].push_back(edge[0]);
        }
        vector<bool>bobPath(amount.size(),false);
        vector<int>bobTime(amount.size(),-1);
        vector<bool>visited(amount.size(),false);
        dfs(bobPath,bobTime,tree,visited,bob,0);
        return rec(bobPath,bobTime,tree,visited,amount,0,0);

    }
};