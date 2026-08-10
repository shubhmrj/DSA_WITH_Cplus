#include<iostream>
#include<vector>
#include<algorithm>
#include <bits/stdc++.h>

using namespace std;


class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        vector<int> res;
        int n =nums.size();
        sort(nums.begin(), nums.end());
        for (int i = 0; i < n; i++) {
            if (nums[i] == target) {
                res.push_back(i);
            }
        }
       return res; 
    }
};

int main(){
    vector<int> nums = {30,11,23,23,4,20};
    Solution sol;
    vector<int> res=sol.targetIndices(nums , 23);
    for(int r : res){
        cout<<r<<" " ;
    }
}