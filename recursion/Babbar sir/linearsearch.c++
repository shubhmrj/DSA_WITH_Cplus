#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


class Solution {
public:
    bool linearsearch(int nums[] ,int size,int element ) {
        if(size<1){
            return false;
        }
        if(nums[0]==element){
            return true;
        }
        else{
            return linearsearch(nums+1, size-1,element);
        }
        return false;
    }
};


int main() {
    int arr[10] = {10, 11,25,35,55,56,99,50};
    Solution sol;
    cout<<sol.linearsearch(arr,8,50);
    
   
    return 0;
}