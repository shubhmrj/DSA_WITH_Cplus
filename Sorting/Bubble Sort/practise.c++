#include<iostream>
#include<vector>
using namespace std;

class Solution {
    public:

        vector<int> bubblesort(vector<int> &nums){

            for(int i =0; i < nums.size(); i++){
                bool swapped = true; 
                for(int j = 0; j < nums.size()-i-1; j++){
                    if(nums[j] > nums[j+1]){
                        swap(nums[j],nums[j+1]);
                        swapped = false;
                    }
                }
                if(swapped){
                    break;
                }

            }
            return nums;
        }

};
int main() {
    vector<int> nums = {5, 6, 1, 2, 4};
    Solution sol;
    vector<int> num1 = sol.bubblesort(nums);
    for (int num : num1) {
        cout << num << " ";
    }
    return 0;
}