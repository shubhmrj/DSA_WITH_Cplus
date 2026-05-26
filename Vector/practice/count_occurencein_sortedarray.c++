#include<iostream>
#include<vector>
using namespace std;

class Solution {
  public:
    int left(vector<int> &arr, int target){

            int i = 0;
            int j = arr.size()-1;
            int found = 0;

            while(i <= j){
                int mid = (i + j) / 2;

                if(arr[mid] == target){
                    found = mid;
                    j = mid - 1;
                }
                else if(arr[mid] < target){
                    i = mid +1;
                }
                else{
                    j = mid -1;
                }
            }
            return found;
        }

        int right(vector<int> &arr, int target){

            int i = 0;
            int j = arr.size()-1;
            int found = 0;

            while(i <= j){
                int mid = (i + j) / 2;

                if(arr[mid] == target){
                    found =mid;
                    i = mid + 1;
                }
                else if(arr[mid] < target){
                    i = mid + 1;
                }
                else{
                    j = mid - 1;
                }
            }
            return found;
        }
        
    int countFreq(vector<int>& arr, int target) {
        int res1 = left(arr, target);
        int res2 = right(arr, target);
        
        return (res2 - res1 + 1);
        
    }
};

int main() {
    vector<int> nums = {8, 9, 10, 12, 12, 12};
    Solution sol;
    int result = sol.countFreq(nums,12);

    cout<<result;
    return 0;

}

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l = 0, h = nums.size() - 1;

        sort(nums.begin(), nums.end());

        while (l <= h) {
            int mid = l + (h - l) / 2;

            if (nums[mid] == target)
                return true;

            // Left half is sorted
            if (nums[l] <= nums[mid]) {
                if (nums[l] <= target && target < nums[mid])
                    h = mid - 1;
                else
                    l = mid + 1;
            }
            // Right half is sorted
            else {
                if (nums[mid] < target && target <= nums[h])
                    l = mid + 1;
                else
                    h = mid - 1;
            }
        }

        return false;
    }
};