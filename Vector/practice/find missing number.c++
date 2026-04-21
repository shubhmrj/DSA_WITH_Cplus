#include<iostream>
#include<vector>
#include <bits/stdc++.h>
using namespace std;


class Solution {
    public:
    int missingNumber(vector<int>& nums) {
        int nums_sum = accumulate(nums.begin(), nums.end(),0);
        int n = nums.size();
        int sum = (n * (n+1) )/2;
        return sum - nums_sum;
    }
};

int main(){
    vector<int> nums1 = {0, 1, 2, 4, 5, 6, 7};

    Solution sol;
    cout<<sol.missingNumber(nums1)<< "     ";

    for (int val : nums1) {
        cout << val <<" ";
    }
    return 0;

}