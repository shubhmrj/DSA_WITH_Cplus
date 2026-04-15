#include<iostream>
#include<vector>

using namespace std;

class Solution {

    public:
        void bubblesort(vector<int> &nums, int size){
            if(size == 0){
                return;
            }

            for(int i = 0; i < size-1; i++){
                if(nums[i] > nums[i+1]){
                    swap(nums[i],nums[i+1]);
                }
            }
            bubblesort(nums, size-1);
        }
};

int main() {
    vector<int> nums = {5, 6, 1, 2, 4, 6,1, 10, 15 ,22 ,1, 0};
    Solution sol;
    int n = nums.size();
    sol.bubblesort(nums,n);

    for(int i = 0; i< n; i++){
        cout<<nums[i]<<" ";
    }
    return 0;
}