#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


class Solution {
public:
    int sumofarray(int nums[] ,int size ) {
        // int sum=0;
        if(size<1){
            return 0;
        }
        // sum += nums[0];
        // cout<<sum<<" ";
        return nums[0] + sumofarray(nums+1, size-1);
        // cout<<sum<<" ";
    }
};


int main() {
    int arr[4] = {3, 11, 3,5,};
    Solution sol;
    cout<<sol.sumofarray(arr,4);
    // for(int i = 0; i<res.size();i++){
    //     cout<<res[i]<<" ";
    // }
    return 0;
}