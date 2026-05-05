#include<iostream>
#include<vector>
using namespace std;

class Solution {
    public:
        void insetionsort(vector<int> &nums){
            for(int i = 1; i< nums.size(); i++){


                int curr = nums[i];
                int j = i - 1;

                while(j >= 0 && nums[j] > curr ){
                    nums[j+1] = nums[j];
                    j--;
                }
                nums[j+1] = curr;
            }
        }
};

int main(){
    vector<int>nums = {15,10,1,7,4,8,2,11,25,35,22,21,3,5,6,2};
    Solution sol;
    sol.insetionsort(nums);
    for(int i=0;i<nums.size();i++){
        cout << nums[i] << " ";
    } cout << endl;
    return 0;
}