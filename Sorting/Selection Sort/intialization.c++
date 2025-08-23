#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> selectionsort(vector<int>& nums) { 
        int n = nums.size();
        for (int i = 0; i < n - 1; i++) {
            int mini = i;
            for (int j = i + 1; j < n; j++) {
                if (nums[j] < nums[mini]) {
                    mini = j;
                }
            }
            swap(nums[i], nums[mini]);
        }
        return nums;
    }
};

int main() {
    vector<int> nums = {5, 6, 1, 2, 4, 3};
    Solution sol;
    vector<int> num1 = sol.selectionsort(nums);
    for (int num : num1) {
        cout << num << " ";
    }
    return 0;
}
