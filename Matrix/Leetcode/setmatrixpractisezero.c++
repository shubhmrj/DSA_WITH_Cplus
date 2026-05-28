#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {

        vector<vector<int>> copy = matrix;

        int n = matrix.size();
        int m = matrix[0].size();
        for(int i = 0; i < n; i++){
            for(int j = 0; j< m; j++){
                int l = 0;
                int k = 0;
                if(copy[i][j] == 0){
                    // cout<<"yes";

                    while(l < m){
                        matrix[i][l] = 0;
                        l++;
                    }
                    while(k < n){
                        matrix[k][j] = 0;
                        k++;
                    }
                }
            }
        }
    }
};

int main(){
    vector<vector<int>> matrix = {
        {0,2,1},
        {4,5,2},
        {7,0,9}
    };

    Solution sol;

    sol.setZeroes(matrix);

    int row = matrix.size();
    int col = matrix[0].size();


    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            cout << matrix[i][j] << " ";
        }
        cout<<endl;
    }
}