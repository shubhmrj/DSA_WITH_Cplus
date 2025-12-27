#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


class Solution {
  private:
  
    bool issafe(vector<vector<int>>& maze,int n, int m, int x, int y,vector<vector<int>>& copy){
        
        if((x >= 0 && x< n) && (y >= 0 && y < m) && copy[x][y]==0 && maze[x][y]==1   ){
            return true;
        }
        else{
           return false;
        }
        
    }
    
    void solve(vector<vector<int>>& maze, vector<string>& res, int n, int m, int x, int y,vector<vector<int>>& copy, string path){
        
        if(x==n-1 && y== m-1){
            res.push_back(path);
            return; 
        }
        
        copy[x][y] = 1;
        
        // down
        int newx = x+1;
        int newy = y;
        if(issafe(maze,n,m,newx,newy,copy)){
            path.push_back('D');
            solve(maze, res, n, m, newx, newy, copy, path);
            path.pop_back();
        }
        
        // up
        newx = x-1;
        newy = y;
        if(issafe(maze,n,m,newx,newy,copy)){
            path.push_back('U');
            solve(maze, res, n, m, newx, newy, copy, path);
            path.pop_back();
        }
        
        // left 
        newx = x;
        newy = y-1;
        if(issafe(maze,n,m,newx,newy,copy)){
            path.push_back('L');
            solve(maze, res, n, m, newx, newy, copy, path);
            path.pop_back();
        }
        
        // Right
        newx = x;
        newy = y+1;
        if(issafe(maze,n,m,newx,newy,copy)){
            path.push_back('R');
            solve(maze, res, n, m, newx, newy, copy, path);
            path.pop_back();
        }
        
        copy[x][y] = 0;
    }
    
  public:
    vector<string> ratInMaze(vector<vector<int>>& maze) {

        vector<string> res;
        vector<vector<int>> copy=maze;
        
        if(maze[0][0]==0){
            return res;
        }
        
        int n = maze.size();
        int m = maze[0].size();
        
        int x = 0;
        int y = 0;
        
        for(int i =0; i<n; i++){
            for(int j =0; j<m; j++){
                copy[i][j] = 0;
            }
        }
        
        string path;
        solve(maze,res,n,m,x,y,copy,path);
        sort(res.begin(),res.end());
        
        return res;
    }
};

int main(){
vector<vector<int>> maze = {
    {1, 0, 0, 0},
    {1, 1, 0, 1},
    {1, 1, 0, 0},
    {0, 1, 1, 1}
};
Solution sol;

vector<string> paths = sol.ratInMaze(maze);

    for (string s : paths) {
        cout << s << " ";
    }

    return 0;
}