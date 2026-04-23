#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

void searchAllTargets(vector<vector<int>> &matrix) {


        vector<vector<int>> copy = matrix;

        int row_size = matrix.size();
        int col_size = matrix[0].size();

        

        for(int i = 0; i < row_size; i++) {
            for(int j = 0; j < col_size; j++) {
                int col_wise = 0;
                int row_wise = 0;
                if(copy[i][j] == 0 ){
                    
                    while(col_wise < col_size){
                        matrix[i][col_wise] = 0;
                        col_wise++;
                    }
                    while(row_wise < row_size){
                        matrix[row_wise][j] = 0;
                        row_wise++;
                    }
                }
            }
        }    
    
}

int main() {
    vector<vector<int>> matrix = {
        {0,2,1},
        {4,5,2},
        {7,0,9}
    };

    searchAllTargets(matrix);

    int row = matrix.size();
    int col = matrix[0].size();


    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            cout << matrix[i][j] << " ";
        }
        cout<<endl;
    }
}