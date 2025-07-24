// leetcode 162 find peak element
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int search(vector<int>& nums) {
        int l = 0;
        int h = nums.size() - 1;
        int n = nums.size();

        if (n == 1) return 0;

        while (l <= h) {
            int mid = l + (h - l) / 2;
            cout << "mid: " << mid << " l: " << l << " h: " << h << endl;

            bool leftOk = (mid == 0 || nums[mid] > nums[mid - 1]);
            bool rightOk = (mid == n - 1 || nums[mid] > nums[mid + 1]);

            if (leftOk && rightOk) return mid;

            if (mid < n - 1 && nums[mid] < nums[mid + 1]) {
                l = mid + 1;
            }
            else {
                h = mid - 1;
            }
        }

        return -1; 
    }
};



int main() {
    vector<int> nums = {6, 2, 1};

    Solution sol;

    cout<<sol.search(nums);

}