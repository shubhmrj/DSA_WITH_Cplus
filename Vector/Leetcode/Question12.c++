#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int search(vector<int>& nums) {
        
        int l=0;
        int h=nums.size()-1;
        int shortest=9999;
        while (l < h) {
            int mid=(l+h)/2;

            if(nums[h]<nums[mid]){
                if (shortest>nums[h]) {
                    shortest=nums[h];                
                }
                else{
                    shortest=nums[l];                
                }

                l = mid + 1;

            }
            else{
                if (shortest>nums[l]) shortest=nums[l];
                else{
                    shortest=nums[h];                
                }
                h = mid;
            }
            return shortest;

        }
    return 0;
    }
};

int main() {
    vector<int> nums = {2,0,1};
                        // {3,2,3}

    Solution sol;

    cout<<sol.search(nums);

}