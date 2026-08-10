#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int search(vector<int>& nums) {
        
        int l=0;
        int h=nums.size()-1;

        while (l < h) {
            int mid=(l+h)/2;
            if(nums[h]<=nums[mid]){
                if(nums[h]==nums[mid]){
                    h--;
                }
                else if (nums[l]==nums[mid]){
                    l++;
                }
                else{
                l = mid + 1;
            }
                // cout<<"l: "<<l<<endl;
            }
            else{
                h = mid;
            }
            
        }
    
        return nums[l];
    }
};

int main() {
    vector<int> nums = {3, 3, 1, 3, 3, 3, 3};

    Solution sol;

    cout<<sol.search(nums);

}