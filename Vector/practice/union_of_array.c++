#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    vector<int> unionArray(vector<int>& nums1, vector<int>& nums2) {
        
        int i = 0, j = 0;
        vector<int> res;
        while (i < nums1.size() && j < nums2.size()) {
            if(nums1[i] < nums2[j]){
                i++;
            }
            else if( nums1[i] > nums2[j]){
                j++;
            }
            else{
                res.push_back(nums1[i]);

                i++;
                j++;
            }
        }
        return res;
    }
};


int main(){
vector<int> nums1 = {0, 1, 2, 4, 5, 6};
vector<int> nums2 = {6, 8};

    Solution sol;
    sol.unionArray(nums1, nums2);

    for (int val : nums1) {
        cout << val <<" ";
    }
    return 0;

}