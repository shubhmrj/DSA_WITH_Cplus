#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


class Solution {
public:
    void insertionsort(int *nums ,int size ) {
        if(size<=1){
            return;
        }
                
        insertionsort(nums,size-1);

        int key = nums[size-1];
        int i = size-2;
        
        while(i >= 0 && key < nums[i]){
                nums[i+1] = nums[i];
                i--;
            }
        
        nums[i+1] = key;
        
    }
};


int main() {
    int arr[8] = {80, 11, 3,5,25,5,2,6};
    Solution sol;
    sol.insertionsort(arr,8);
    for(int i = 0; i<8; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}