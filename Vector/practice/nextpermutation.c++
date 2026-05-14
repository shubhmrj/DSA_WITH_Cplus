#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

// class Solution{
//     public:
//         void nextPermutation(vector<int> &nums){
//             int n = nums.size();
//             int pivot = -1;
//             for(int i = nums.size()-2; i>= 0; i--){
//                 if(nums[i] < nums[i+1]){
//                     pivot = i;
//                     break;               
//                 }
//                 cout<<"i "<<i<<endl;                

//             }

            
//             if(pivot != -1){
//                 for (int i = n - 1; i > pivot; i--) {

//                     if (nums[i] > nums[pivot]) {
//                         swap(nums[i], nums[pivot]);
//                         break;
//                     }
//                 }
//             }  
//             reverse(nums.begin() + pivot + 1 , nums.end());

//         }
// };

class Solution{
    public:
        void nextPermutation(vector<int> &nums){

            int n = nums.size();
            int pivot = -1;

            for(int i = n - 2; i >= 0; i-- ){
                if(nums[i] < nums[i+1]){
                    pivot = i;
                    break;
                }
            }
            if(pivot != -1){
                for(int i = n - 1; i > pivot; i-- ){
                    if(nums[i] > nums[pivot]){
                        swap(nums[i], nums[pivot]);
                        break;
                    }
                }
            }
            

            reverse(nums.begin() + pivot + 1, nums.end());

            
        }
};


int main() {
    vector<int> nums = {1,2,1};
    Solution sol;
    sol.nextPermutation(nums);

    for (int val : nums) {
        cout << val << " ";
    }
    return 0;

}