#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


class Solution {
public:
    bool issorted(int nums[] ,int size ) {
        if(size==0 || size==1){
            return true;
        }
        if(nums[0]>nums[1]){
            return false;
        }
        else{
            return issorted(nums+1, size-1);
        }
        return true;
    }
};


int main() {
    int arr[10] = {10, 11,25,35,55,56,99,50};
    Solution sol;
    cout<<sol.issorted(arr,8);
    
   
    return 0;
}