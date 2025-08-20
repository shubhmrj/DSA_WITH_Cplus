#include<iostream>
#include<vector>
#include<algorithm>
#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool iscomplete(vector<int>& piles, int n, int h, int mid) {
        int hCount = 0;

        for (int i = 0; i < n; i++) {
            hCount += piles[i]/mid;
            if (hCount> h) {
                return false;
            } 
        }
        return true;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int n = piles.size();
        // int s = *max_element(piles.begin(), piles.end());  // lower bound
        int s=1;
        int e = *max_element(piles.begin(), piles.end());  
        // cout<<e;
        int ans = e;

        while (s <= e) {
            int mid = s + (e - s) / 2;
            if (iscomplete(piles, n, h, mid)) {
                ans = mid;
                s = mid + 1;  
            } else {
                e = mid - 1;  
            }
        }
        return ans;
    }
};


int main(){
    vector<int> piles = {30,11,23,4,20};
    Solution sol;
    cout<<sol.minEatingSpeed(piles , 8)<<endl;
    // int a=11/3;
    // cout<<round(a);
}