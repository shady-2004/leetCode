class Solution {

public:
    int orangesRotting(vector<vector<int>>& grid) {
        queue<pair<int,int>>rotten;
        vector<pair<int,int>>dir{{1,0},{-1,0},{0,1},{0,-1}};
        int n=grid.size();
        int m=grid[0].size();
        int fresh=0;
        int time=0;
        vector<vector<bool>>visit(n,vector<bool>(m,false));
       for(int i=0;i<n;i++)
            for(int j=0;j<m;j++){
                if(grid[i][j]==2)rotten.push({i,j});
                else if(grid[i][j]==1)fresh++;
            }

        while(!rotten.empty()){
            time++;
            int s=rotten.size();
            while(s--){
                pair<int,int>cur=rotten.front();
                rotten.pop();
                for(auto [x,y]:dir){
                    int newX=x+cur.first;
                    int newY=y+cur.second;
                    if(newX<0||newY<0||newX==n||newY==m||visit[newX][newY])continue;
                    if(grid[newX][newY]==1){
                        fresh--;
                        grid[newX][newY]=2;
                        rotten.push({newX,newY});
                    }

                }
            }
        }
        if(time)time--;
        return fresh?-1:time;

    }
};