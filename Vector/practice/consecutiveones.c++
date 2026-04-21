#include<iostream>
#include<vector>
#include <bits/stdc++.h>
using namespace std;


class Solution {
    public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxi =0;
        int count = 0;
        for(int i = 0; i< nums.size(); i++){
            if(nums[i] == 1){
                count++;
                maxi = max (maxi , count);
            }
            else{
                count = 0;
            }
            maxi = max (maxi , count);
        }
        return maxi;
    }
};

int main(){
    vector<int> nums1 = {1, 1, 0, 0, 1, 1, 1, 0};

    Solution sol;
    cout<<sol.findMaxConsecutiveOnes(nums1)<< "     ";

    // for (int val : nums1) {
    //     cout << val <<" ";
    // }
    return 0;

}