class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        vector<bool>visit(grid.size()*grid.size()+1,false);
        int rep;
        for(auto&row:grid){
            for(auto&el:row){
                if(visit[el])rep=el;
                visit[el]=true;
            }
        }
        for(int i=1;i<visit.size();i++)
            if(!visit[i]) return {rep,i};
            return {};
    }
};