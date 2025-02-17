class Solution {
    void rec(string&tiles,string&cur,unordered_set<string>&res,vector<bool>&visited){
        if(cur.size())res.insert(cur);
        for(int i=0;i<tiles.size();i++){
            if(visited[i])continue;
            cur+=tiles[i];
            visited[i]=true;
            rec(tiles,cur,res,visited);
            visited[i]=false;
            cur.pop_back();
        }
    }
public:
    int numTilePossibilities(string tiles) {
        string cur;
        unordered_set<string> res;
        vector<bool>visited(tiles.size(),false);
        rec(tiles,cur,res,visited);
        return res.size();
    }
};