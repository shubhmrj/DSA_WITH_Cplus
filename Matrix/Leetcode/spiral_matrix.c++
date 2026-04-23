#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

class Solution{
    public:
        vector<int> matrix(vector<vector<int>> &nums){
            int row = nums.size();
            int column = nums[0].size();
            vector<int> result ;

            int mat_size = row * column;
            int curr = 0;

            int first_row = 0;
            int last_row = row -1;

            int first_col = 0;
            int last_col = column - 1;
            
            while(curr < mat_size){

                // first row
                for(int index = first_col; curr < mat_size && index  <= last_col; index++){
                    result.push_back(nums[first_row][index]);
                    curr++;
                }
                first_row++;
                
                // last column 
                for(int index = first_row; curr < mat_size && index  <= last_row; index++){
                    result.push_back(nums[index][last_col]);
                    curr++;
                }
                last_col--;

                // ending row
                for(int index = last_col; curr < mat_size && index  >= first_col; index--){
                    result.push_back(nums[last_row][index]);
                    curr++;
                }
                last_row--;

                
                // first column
                for(int index = last_row; curr < mat_size && index  >= first_row; index--){
                    result.push_back(nums[index][first_col]);
                    curr++;
                }
                first_col++;

            }
            
        return result;
            
        }
};

int main() {

    // int row = 3, column = 4;
    // vector<vector<int>> nums(row, vector<int>(column));

    // input
    // for(int i = 0; i < row; i++){
    //     for(int j = 0; j < column; j++){
    //         cin >> nums[i][j];
    //     }
    // }

    vector<vector<int>> nums = {
        {1, 2, 3,4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    // int row = nums1.size();
    // cout<<"row : "<< row << endl;

    // int column = nums1[0].size();
    // cout<<"column : "<< column << endl;

    Solution sol;
    vector<int> nums1 = sol.matrix(nums);
    // output
    for(int i = 0; i < nums1.size(); i++){
            cout << nums1[i] << " " ;
    }
    cout << endl ;
    
}