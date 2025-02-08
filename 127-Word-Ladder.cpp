class Solution {
    void bellman(vector<int>&dist,vector<vector<int>>&edges,int n){
        for(int i=0;i<n-1;i++){
            for(auto&edge:edges){
                if(dist[edge[0]]!=INT_MAX&&dist[edge[0]]+1<dist[edge[1]])
                    dist[edge[1]]=dist[edge[0]]+1;
            }
        }
    }
   
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        int end=find(wordList.begin(),wordList.end(),endWord)-wordList.begin();
        if(end>=wordList.size()) return 0;

        vector<vector<int>>edges;
        for(int i=0;i<wordList.size()-1;i++)
           for(int j=i+1;j<wordList.size();j++)
                {
                    int differs=0;
                    for(int k=0;k<beginWord.size();k++){
                        if(wordList[i][k]!=wordList[j][k])differs++;
                        if(differs>1)break;
                    }
                    if(differs==1){
                        edges.push_back({i+1,j+1});
                        edges.push_back({j+1,i+1});

                    }
                }
                for(int i=0;i<wordList.size();i++){
                    int differs=0;
                    for(int k=0;k<beginWord.size();k++){
                        if(wordList[i][k]!=beginWord[k])differs++;
                        if(differs>1)break;
                    }
                     if(differs==1){
                       edges.push_back({i+1,0});
                        edges.push_back({0,i+1});
                    }
                }
                vector<int>dist(wordList.size()+1,INT_MAX);
                dist[0]=0;
        bellman(dist,edges,wordList.size()+1);
       
        return dist[end+1]==INT_MAX?0:dist[end+1]+1;
    }
};