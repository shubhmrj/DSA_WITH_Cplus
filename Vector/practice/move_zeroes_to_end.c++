#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    void movezeroes(vector<int>& nums, int k) {

        int n = nums.size();
        int count_zero = 0;

        
        int i = 0; 
        int j = 1;
        while( i < n && j < n){

            if(nums[i] == 0 && nums[j] != 0){
                nums[i] = nums[j];
                nums[j] = 0; 
                i++;
                j++;
                count_zero++;
            }
            else if(nums[j] == 0){
                j++;
            }
            else{
                i++;
            }

        }


        // optimized method
    //     int j = 0;

    // for(int i = 0; i < nums.size(); i++){
    //     if(nums[i] != 0){
    //         swap(nums[i], nums[j]);
    //         j++;
    //     }
    // }
    }
};

int main() {
    vector<int> nums = {0, 1, 4, 0, 5, 2};
    Solution sol;
    sol.movezeroes(nums,0);

    for (int val : nums) {
        cout << val << " ";
    }
    return 0;
}
