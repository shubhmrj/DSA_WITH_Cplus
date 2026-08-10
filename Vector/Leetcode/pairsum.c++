#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int minPairSum(vector<int>& nums) {
        int i=0, j=nums.size()-1 ,sum=0 ,ans=0;
        sort(nums.begin(),nums.end());
        while(i<j){
            sum=nums[i]+nums[j];
            ans= max(ans, sum);
            i++;
            j--;
        }
        return ans;
    }
};

int main() {
    vector<int> nums1 = {3,5,4,2,4,6};

    Solution sol;
    cout<<sol.minPairSum(nums1);
    // for(int i = 0; i<res.size();i++){
    //     cout<<res[i]<<" ";
    // }
    return 0;
}

