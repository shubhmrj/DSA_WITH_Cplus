#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <algorithm>
using namespace std;


class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> res;
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());

        int i = 0, j = 0;
        while (i < nums1.size() && j < nums2.size()) {
            if (nums1[i] < nums2[j]) {
                i++;
            }
            else if (nums1[i] > nums2[j]) {
                j++;
            }
            else {
                // add only if res is empty or last added is different
                if (res.empty() || res.back() != nums1[i]) {
                    res.push_back(nums1[i]);
                }
                i++;
                j++;
            }
        }
        return res;
    }
};
class Solution {
public:
    int minPairSum(vector<int>& nums) {
        int i=0, j=nums.size()-1 ,sum=0 ,ans=0;
        sort(nums[i],nums[j]);
        while(i<j){
            int ans= max(ans, sum);
            sum=nums[i]+nums[j];
            i++;
            j--;
        }
        return ans;
    }
};

int main() {
    vector<int> nums1 = {3, 11, 3,5,6,7,12, 4, 2 , 5,3};
    vector<int> nums2 = {3, 11 ,5};

    Solution sol;
    vector<int> res = sol.intersection(nums1,nums2);
    for(int i = 0; i<res.size();i++){
        cout<<res[i]<<" ";
    }
    return 0;
}


// this approach contain more time complexity

// for (int i = 0; i < size; i++) {
        //     for (int j = 0; j <= size_1; j++) {
        //         if(nums1[i]==nums2[j]){
        //             res.push_back(nums1[i]);
        //             // nums1[i]=-1;
        //             nums2[j]=-1;
        //             break;
        //         }
        // }
        // }