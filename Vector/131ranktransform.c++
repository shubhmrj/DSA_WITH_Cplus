#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>
#include <bits/stdc++.h>

using namespace std;


class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int> copy_arr = arr;
        sort(copy_arr.begin(),copy_arr.end());
        copy_arr.erase(unique(copy_arr.begin(), copy_arr.end()), copy_arr.end());

        unordered_map<int, int> mp;
        for (int i = 0; i < copy_arr.size(); i++) {
            mp[copy_arr[i]]=i+1;
        }
        for (int j =0;j<arr.size();j++) {
            arr[j]=mp[arr[j]];
        }
        return arr;
    }
};

int main(){
    vector<int> arr = {3,3,3,40,60,5};
    Solution sol;
    sol.arrayRankTransform(arr);
    for(int r : arr){
        cout<<r<<" " ;
    }
}