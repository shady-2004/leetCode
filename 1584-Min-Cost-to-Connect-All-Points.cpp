class Solution {
  
public:
    int minCostConnectPoints(vector<vector<int>>& points) {
       vector<vector<int>>edges(points.size(),vector<int>(points.size()));
       for(int i=0;i<points.size();i++){
        for(int j=i+1;j<points.size();j++){
                int w=abs(points[i][0]-points[j][0])+abs(points[i][1]-points[j][1]);
                edges[i][j]=w;
                edges[j][i]=w;
        }
       }
         priority_queue<vector<int>,vector<vector<int>>,greater<vector<int>>>pq;
        vector<bool>done(points.size(),0);
        int cost=0;
        int E=0;
        for(int i=1;i<points.size();i++){
            pq.push({edges[0][i],0,i});
        }

        while(E<points.size()-1){
            while(done[pq.top()[1]]&&done[pq.top()[2]])
                pq.pop();
                vector<int>cur=pq.top();
                pq.pop();
            done[cur[2]]=1;
            done[cur[1]]=1;
            cost+=cur[0];
            E++;
            for(int i=0;i<points.size();i++){
                if(cur[2]==i)continue;
                pq.push({edges[cur[2]][i],cur[2],i});
            }
        }
        return cost;
    }
};