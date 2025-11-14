#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


class Solution {
public:
    void bubblesort(int *nums ,int size ) {
        if(size==0){
            return;
        }
        for(int i=0; i<size-1;i++){
            if(nums[i]>nums[i+1]){
                swap(nums[i],nums[i+1]);
            }
        }
        bubblesort(nums,size-1);
        
    }
};


int main() {
    int arr[8] = {80, 11, 3,5,25,5,2,6};
    Solution sol;
    sol.bubblesort(arr,8);
    for(int i = 0; i<8; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}