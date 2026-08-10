#include<iostream>
#include<vector>
using namespace std;


class Solution {
public:
    int lastNegative(vector<int>& nums) {
    int l = 0, h = nums.size() - 1;
    int neg = -1;  // default: no negative found

        while (l <= h) {
            int mid = l + (h - l) / 2;

            if (nums[mid] < 0) {
                neg = mid;     // store candidate
                l = mid + 1;   // move right
            } 
            else {
                h = mid - 1;   // move left (for 0 or positive)
            }
        }
        return neg+1;
    }


    int lastPositive(vector<int>& nums) {
    int l = 0, h = nums.size() - 1;
    int pos = -1;
    int n=nums.size();
        while (l <= h) {
            int mid = l + (h - l) / 2;

            if (nums[mid] > 0) {
                pos = mid;     
                h = mid -1 ;   
            } 
            else {
                l = mid + 1;   
            }
        }
            if (pos == -1) {
                return 0; 
        }   else {
                return n - pos; 
        }

    }

    int maximumCount(vector<int>& nums) {
        int n = nums.size();
        if (nums[0] == 0 && nums[n-1] == 0) return 0;
        if (n == 1 && nums[0] != 0) return 1;
        // if (nums[0] < 0 && nums[n-1] < 0) return n;  // all negative
        return max(lastNegative(nums), lastPositive(nums));
    }

};


int main(){
    vector<int> nums = {-2,-1,-1};
    Solution sol;

    cout<<sol.maximumCount(nums);
    
}