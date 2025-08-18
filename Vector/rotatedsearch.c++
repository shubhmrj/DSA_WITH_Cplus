#include<iostream>
#include<vector>
using namespace std;

class Solution{

public:
    int pivot(vector<int>nums){
        int start=0;
        int end=nums.size()-1;
        while(start<end){
            int mid=start+(end-start)/2;
            if(nums[0]<=nums[mid]){
                start=mid+1;
            }
            else{
                end=mid;
            }
        }
        return start;
    }

//     int BinarySearch(vector<int>& nums, int start, int end, int key){
//         while(start <= end){
//             int mid = start + (end-start)/2;
//             if(nums[mid] == key) return mid;
//             else if(nums[mid] > key) end = mid-1;
//             else start = mid+1;
//         }
//     return -1;
//     }

// int rotatedsearch(vector<int>nums, int key ,int n){
//     int piv= pivot(nums);
//     if(nums[piv]<=key && key<=nums[n-1]){
//         return BinarySearch(nums,piv,n-1,key);
//     }
//     else{
//         return BinarySearch(nums,0,piv-1,key);
//     }
// }
};
int main(){
    vector<int>nums={10,11,12,13,14,0,1};
    int n= nums.size();
    Solution sol;    
    cout<<sol.pivot(nums);
}