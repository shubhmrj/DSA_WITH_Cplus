#include<iostream>
#include<vector>
#include <climits>

using namespace std;

class Solution{

    public:
        int pivot(vector<int> nums){
            int i =0;
            int j = nums.size()-1;

            while(i < j){
                int mid = (i + j) /2;

                if((nums[j] < nums[mid])){
                    i = mid+1;
                }
                else{
                    j = mid;
                }
            }
            return nums[i];

        }
};

int main() {
    vector<int> nums = {0,1, 2, 3,5,6};
    Solution sol;
    cout<< sol.pivot(nums);


}