#include<iostream>
#include<vector>
using namespace std;

class Solution{
    public:
        
        int left(vector<int> &nums, int target){

            int i = 0;
            int j = nums.size()-1;
            int found = -1;

            while(i <= j){
                int mid = (i + j) / 2;

                if(nums[mid] == target){
                    found = mid;
                    j = mid - 1;
                }
                else if(nums[mid] < target){
                    i = mid +1;
                }
                else{
                    j = mid -1;
                }
            }
            return found;
        }

        int right(vector<int> &nums, int target){

            int i = 0;
            int j = nums.size()-1;
            int found = -1;

            while(i <= j){
                int mid = (i + j) / 2;

                if(nums[mid] == target){
                    found = mid;
                    i = mid + 1;
                }
                else if(nums[mid] < target){
                    i = mid + 1;
                }
                else{
                    j = mid - 1;
                }
            }
            return found;
        }

    vector<int> searchRange(vector<int>& nums, int target) {
        int leftpair = left(nums, target);
        int rightpair = right(nums, target);
        
        return {leftpair, rightpair};
    }
};



int main() {
    vector<int> nums = {5,7,7,8,8,10};
    Solution sol;
    vector<int> result = sol.searchRange(nums,8);

    for (int val : result) {
        cout << val << " ";
    }
    return 0;

}