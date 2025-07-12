// remove duplicate from sorted array 
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        int index=1;
        for(int i=1; i<n;i++){
            if(nums[i]!=nums[i-1]){
                nums[index++]=nums[i];
            }
        }

        return index;
    }
};


int main() {
    vector<int> nums = {1, 5, 5, 8, 9, 15, 20, 25};

    Solution sol;
    int k = sol.removeDuplicates(nums);

    for (int i = 0; i < k; i++)
        cout << nums[i] << " ";



}

