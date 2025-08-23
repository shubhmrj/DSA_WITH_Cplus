#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> sortArray(vector<int>& nums) { 
        int n = nums.size();
        for (int i = 0; i < n ; i++) {
            bool swapped = false;
            for (int j = 0; j < n-i-1; j++) {
                if (nums[j] > nums[j+1]) {
                    swap(nums[j], nums[j+1]);
                    swapped = true;
                }
            }
            if(swapped==false){
                break;
            }
        }
        return nums;
    }
};



int main() {
    vector<int> nums = {5, 6, 1, 2, 4, 5555555,3 ,44, 75 ,42 ,25,36,44,1 ,0 ,2 ,5 ,666 ,11 ,15 ,25 ,12 };
    Solution sol;
    vector<int> num1 = sol.sortArray(nums);
    for (int num : num1) {
        cout << num << " ";
    }
    return 0;
}
