#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m - 1;          
        int j = n - 1;          
        int k = m + n - 1;      

        // Merge in reverse
        while (i >= 0 && j >= 0) {
            if (nums1[i] > nums2[j])
                nums1[k--] = nums1[i--];
            else
                nums1[k--] = nums2[j--];
        }

        // Copy remaining nums2 elements
        while (j >= 0)
            nums1[k--] = nums2[j--];
    }
};

int main() {
    vector<int> nums1 = {1, 3, 5, 0, 0, 0};
    vector<int> nums2 = {2, 4, 6};

    Solution sol;
    sol.merge(nums1, 3, nums2, 3);

    for (int num : nums1)
        cout << num << " ";
    cout << endl;
}
