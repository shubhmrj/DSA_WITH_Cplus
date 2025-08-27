#include <iostream>
#include <vector>
using namespace std;

class Solution1 {
public:
    vector<int> insertionsort(vector<int>& nums) { 
        int n = nums.size();
        for (int i = 1; i < n; i++) {
            int temp = nums[i];
            int j = i-1;
            for (; j >=  0; j--) {
                if (temp < nums[j]) {
                    nums[j+1] = nums[j];
                }
                else{
                    break;
                }
            }
            nums[j+1]= temp;
        }
        return nums;
    }
};

// from while loop

class Solution {
public:
    vector<int> insertionsort(vector<int>& nums) { 
        int n = nums.size();
        for (int i = 1; i < n; i++) {
            int temp = nums[i];
            int j = i-1;
            while(j>=0 && temp < nums[j]) {
                nums[j+1] = nums[j];
                j--;
            }
            nums[j+1]= temp;
        }
        return nums;
    }
};

int main() {
    vector<int> nums = {15,10,1,7,4,8,2,11,25,35,22,21,3,5,6,2};
    Solution sol;
    vector<int> num1 = sol.insertionsort(nums);
    for (int num : num1) {
        cout << num << " ";
    }
    return 0;
}
