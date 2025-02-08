class Solution {
  
   
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        int end=find(wordList.begin(),wordList.end(),endWord)-wordList.begin();
        if(end>=wordList.size()) return 0;

        vector<vector<int>>edges(wordList.size()+1);
        for(int i=0;i<wordList.size()-1;i++)
           for(int j=i+1;j<wordList.size();j++)
                {
                    int differs=0;
                    for(int k=0;k<beginWord.size();k++){
                        if(wordList[i][k]!=wordList[j][k])differs++;
                        if(differs>1)break;
                    }
                    if(differs==1){
                        edges[i+1].push_back(j+1);
                        edges[j+1].push_back(i+1);
                        
                    }
                }
                for(int i=0;i<wordList.size();i++){
                    int differs=0;
                    for(int k=0;k<beginWord.size();k++){
                        if(wordList[i][k]!=beginWord[k])differs++;
                        if(differs>1)break;
                    }
                     if(differs==1){
                       edges[0].push_back(i+1);
                    }
                }
             vector<bool>visited(wordList.size()+1,false);
             queue<int>q;
             q.push(0);
             int s=1;
             while(!q.empty()){
                int size=q.size();
                while(size--){
                    int cur=q.front();
                    q.pop();
                    for(auto a:edges[cur]){
                        if(!visited[a]){
                            if(a==end+1)return s+1;
                            q.push(a);
                        }
                    }
                    visited[cur]=true;
                }
                s++;
             }

       
        return 0;
    }
};