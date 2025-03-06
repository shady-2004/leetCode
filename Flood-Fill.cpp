class Solution {
 void rec(vector<vector<int>>& image,vector<vector<bool>>&visited,int colora,int colorb,int i,int j){
    if(i<0||j<0||i==image.size()||j==image[0].size()||visited[i][j])return;
    visited[i][j]=true;
    if(image[i][j]==colorb){
        image[i][j]=colora;
    }
    else return;
    rec(image,visited,colora,colorb,i+1,j);
    rec(image,visited,colora,colorb,i,j+1);
    rec(image,visited,colora,colorb,i-1,j);
    rec(image,visited,colora,colorb,i,j-1);

 }
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        
        vector<vector<bool>>visited(image.size(),vector<bool>(image[0].size(),false));
        rec(image,visited,color,image[sr][sc],sr,sc);
        return image;
    }
};