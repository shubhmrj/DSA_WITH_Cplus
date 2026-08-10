#include<iostream>
#include<vector>
using namespace std;


class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {

        int l=0;
        int h=nums.size();
        while (l <=h) {

            int mid =(l + h)/2;
            if (target==nums[mid]){
                return mid;
 
            }
            else if (target<nums[mid]){
                h=mid-1;
            }
            else{
                l=mid+1;
            }
        
        }
        return l;
    }
};

int main(){
    vector<int> nums = {1, 5, 5, 8, 9, 15, 20, 25};
    int target=5;
    Solution sol;

    cout<<sol.searchInsert(nums,target);

}