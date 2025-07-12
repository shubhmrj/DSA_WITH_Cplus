// delete all elements which is given 
#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        
        int k=0;
        int n = nums.size();
        for(int i=0; i<n;i++){
            if(val != nums[i]){
                nums[k++]=nums[i];
            }
        }

        return k;

        
    }
};


int main() {
    vector<int> nums = {1, 5, 5, 8, 9, 15, 20, 25};
    int val=5;

    Solution sol;
    int k = sol.removeElement(nums,val);

    for (int i = 0; i < k; i++)
        cout << nums[i] << " ";



}