#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int low = 0, mid = 0, high = nums.size() - 1;

        while (mid <= high) {
            if (nums[mid] == 0) {
                swap(nums[low], nums[mid]);
                low++;
                mid++;
            }
            else if (nums[mid] == 1) {
                mid++;
            }
            else { // nums[mid] == 2
                swap(nums[mid], nums[high]);
                high--;
            }
        }
                for (int num : nums) cout << num << " ";

    }
};


int main() {
    vector<int> numbers = {2, 1, 1, 0,2,0,1};
    Solution sol;
    sol.sortColors(numbers);
    return 0;
}
