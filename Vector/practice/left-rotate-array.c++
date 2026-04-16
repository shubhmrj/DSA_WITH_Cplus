#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    void rotateArray(vector<int>& nums, int k) {

        int n = nums.size();
        if(k > nums.size()) {
            k = k % n;
        }
        vector<int> res(n);

        for(int i = 0; i< n; i++ ){
            int val = (i - k + n) % n;
            res[val] = nums[i];
        }
        nums = res;
    }
};

int main() {
    vector<int> nums = {1, 5, 8, 3, 10, 5};
    Solution sol;
    sol.rotateArray(nums,8);

    for (int val : nums) {
        cout << val << " ";
    }
    return 0;
}
