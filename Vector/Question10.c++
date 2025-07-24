// Question 81 leetcode
#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l = 0, h = nums.size() - 1;

        sort(nums.begin(), nums.end());

        while (l <= h) {
            int mid = l + (h - l) / 2;

            if (nums[mid] == target)
                return true;

            // Left half is sorted
            if (nums[l] <= nums[mid]) {
                if (nums[l] <= target && target < nums[mid])
                    h = mid - 1;
                else
                    l = mid + 1;
            }
            // Right half is sorted
            else {
                if (nums[mid] < target && target <= nums[h])
                    l = mid + 1;
                else
                    h = mid - 1;
            }
        }

        return false;
    }
};


int main() {
    // vector<int> nums = {4,5,6,7,0,1,2};
    vector<int> nums ={1,0,1,1,1};
    int target = 0;

    Solution sol;

    cout<<sol.search(nums, target);

}

// chatgpt technique gives another 
class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int l = 0, r = nums.size() - 1;

        while (l <= r) {
            int mid = l + (r - l) / 2;

            if (nums[mid] == target) return true;

            // If we cannot determine the sorted half due to duplicates
            if (nums[l] == nums[mid] && nums[mid] == nums[r]) {
                ++l;
                --r;
            }
            // Left half is sorted
            else if (nums[l] <= nums[mid]) {
                if (nums[l] <= target && target < nums[mid]) {
                    r = mid - 1;
                } else {
                    l = mid + 1;
                }
            }
            // Right half is sorted
            else {
                if (nums[mid] < target && target <= nums[r]) {
                    l = mid + 1;
                } else {
                    r = mid - 1;
                }
            }
        }

        return false;
    }
};
