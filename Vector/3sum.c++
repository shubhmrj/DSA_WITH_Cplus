#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int size = nums.size();
        if (size < 3) return false; // too short for triplet

        int i = 0, j = 1, k = 2;

        while (i < size - 2) {
            if (nums[i] < nums[j]) {
                while (k < size) {
                    if (nums[j] < nums[k]) {
                        return true; // found increasing triplet
                    }
                    k++;
                }
            }
            // Move to next set of indices
            j++;
            if (j >= size - 1) {
                i++;
                j = i + 1;
            }
            k = j + 1;
        }
        return false;
    }
};


int main() {
    vector<int> arr = {3, 11, 3,5,6,7,12, 4, 2 , 5,3};
    Solution sol;
    cout<<sol.increasingTriplet(arr);
    // for(int i = 0; i<res.size();i++){
    //     cout<<res[i]<<" ";
    // }
    return 0;
}