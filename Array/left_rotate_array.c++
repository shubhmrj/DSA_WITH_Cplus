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
        vector<int> res;

        for(int i = 0; i< n; i++ ){
            int val = (i - k + n) % n;
            res[val] = nums[i];
        }
        nums = res;
    }
};

