// #include<iostream>
// #include<vector>
// using namespace std;

// class Solution {
// public:
//     vector<vector<int>> permute(vector<int>& nums ,int k) {
//     static vector<int> A(4, 0);
//     static vector<vector<int>> res;

//     int i;

//     if(nums[k]==nums.size()-1){
//         // res[k]=;
//         cout<<res<<endl;
//     }
//     else{
//         for(i=0;i<=nums.size()-1;i++){
//             if(A[i]==0){
//                 res[k]=nums[i];
//                 A[i]=1;
//                 permute(nums,k+1);
//                 A[i]=0;
//             }
//         }
//     }
//     return res;
//     }
// };

// int main(){
//     Solution sol;
//     // vector<int> nums{1,2,3};
        
//     vector<int> nums = {6, 2, 1};

//     sol.permute(nums,0);
    
// }



#include <iostream>
#include <vector>
using namespace std;

vector<int> max(vector<int>& nums, int target) {
    vector<int> result;
    for (int num : nums) {
        if (num > target) {
            result.push_back(num);
        }
    }
    return result;
}

int main() {
    vector<int> numbers = {1, 5, 8, 3, 10};
    int target = 5;

    vector<int>
     output = max(numbers, target);

    for (int val : output) {
        cout << val << " ";
    }
    return 0;
}
