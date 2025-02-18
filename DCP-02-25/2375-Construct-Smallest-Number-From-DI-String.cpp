class Solution {
    void rec(string&pattern,string &cur,string &res ,vector<bool>&visited,int i,int prev=0){
        if(i==-1){
            if(res.size())
            res=res>cur?cur:res;
            else res=cur;
            return;
        }
        int st,ed;

        if(pattern[i]=='D'){
            st=prev+1;
            ed=9;
        }
        else{
            st=1;
            ed=prev-1;
            }
     
            for(int j=st;j<=ed;j++){
                if(visited[j])continue;
                cur[i]=j+'0';
                visited[j]=true;
                rec(pattern,cur,res,visited,i-1,j);
                visited[j]=false;
            }
      
        
    }
public:
    string smallestNumber(string pattern) {
        vector<bool>visited(10,false);
        string cur;
        string res;
        for(int i=0;i<=pattern.size();i++)cur+='0';
        for(int i=1;i<=9;i++){
                visited[i]=true;
                cur[pattern.size()]=i+'0';
                rec(pattern,cur,res,visited,pattern.size()-1,i);
                visited[i]=false;
        }
        return res;
    }
};