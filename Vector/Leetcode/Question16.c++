// swap alternate value
#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    void searchRange(vector<int>& nums) {
        // vector<int> result;
        int l=0;
        int h=1;
        while (h<nums.size()) {
            swap(nums[l],nums[h]);
            l+=2; 
            h+=2;
    } 

    }
};

int main() {
    vector<int> nums = {1, 5, 8, 3, 10};
    Solution sol;
    sol.searchRange(nums);

    for (int val : nums) {
        cout << val << " ";
    }
    return 0;
}
