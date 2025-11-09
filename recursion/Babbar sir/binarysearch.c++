#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


class Solution {
public:
    bool binarysearch(int nums[] ,int s,int element,int e ) {
        if(s>e){
            return false;
        }
        int mid = (s+e)/2;
        if(nums[mid]==element){
            return true;
        }
        else if(element<nums[mid]){
            return binarysearch(nums, s,element,mid-1);
        }
        else {
            return binarysearch(nums, mid+1,element,e);
        }
        return false;
    }
};


int main() {
    int arr[10] = {10,11,25,35,55,56,99};
    Solution sol;
    cout<<sol.binarysearch(arr,0,55,6);
    
   
    return 0;
}