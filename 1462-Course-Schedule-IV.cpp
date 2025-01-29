class Solution {
    void transitiveClosure(int n,vector<vector<bool>>&transClosure){
        for(int k=0;k<n;k++){
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                   transClosure[i][j]= (transClosure[i][k]&transClosure[k][j])|transClosure[i][j];
                }
            }
        }
    }

public:
    vector<bool> checkIfPrerequisite(int numCourses, vector<vector<int>>& prerequisites, vector<vector<int>>& queries) {
        vector<vector<bool>>transClosure(numCourses,vector<bool>(numCourses,0));
        vector<bool>res(queries.size(),false);
        for(int i=0;i<numCourses;i++)
            transClosure[i][i]=1;

        for(auto&edge:prerequisites)
            transClosure[edge[0]][edge[1]]=true;
            transitiveClosure(numCourses,transClosure);
            for(int i=0;i<queries.size();i++){
                res[i]=transClosure[queries[i][0]][queries[i][1]];
            }
            return res;
    }
};