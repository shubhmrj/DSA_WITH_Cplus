#include<iostream>
#include<vector>

using namespace std;

// class Solution {
// public:
//     vector<int> unionArray(vector<int>& nums1, vector<int>& nums2) {
        
//         int i = 0, j = 0;
//         vector<int> res;
//         while (i < nums1.size() && j < nums2.size()) {
//             if(nums1[i] < nums2[j]){
//                 i++;
//             }
//             else if( nums1[i] > nums2[j]){
//                 j++;
//             }
//             else{
//                 res.push_back(nums1[i]);

//                 i++;
//                 j++;
//             }
//         }
//         return res;
//     }
// };


class Solution {
public:
    bool binarysearch(vector<int>& nums1, int key){
        int i = 0;
        int j = nums1.size() -1;

        int  mid = (i+j) / 2;

        while(i < j){


            int  mid = (i+j) / 2;

            if(nums1[mid] == key){
                return true;
            }
            else if(nums1[mid] < key){
                i = mid + 1;
            }
            else {
                j = mid - 1;
            }
        }
        return false;
    }


    vector<int> unionArray(vector<int>& nums1, vector<int>& nums2) {
        
        vector<int> res;
        for (int num : nums2 ) {

            if(!binarysearch(nums1,num)){
                nums1.push_back(num);
            }
        }
        return nums1;
    }
};

int main(){
vector<int> nums1 = {0, 1, 2, 4, 5, 6, 7};
vector<int> nums2 = {6, 7, 8};

    Solution sol;
    sol.unionArray(nums1, nums2);

    for (int val : nums1) {
        cout << val <<" ";
    }
    return 0;

}