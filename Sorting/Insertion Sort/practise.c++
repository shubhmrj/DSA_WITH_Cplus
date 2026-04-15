#include <iostream>
#include <vector>
using namespace std;



class Solution {
public:
    vector<int> insertionsort(vector<int>& nums) { 
        
        for(int i = 1; i < nums.size(); i++ ){
            int key = nums[i];
            int j = i-1;
            while(j >=0 && key < nums[j]){
                nums[j + 1] = nums[j];
                j--;
            }
            nums[j+1] = key;
        }
        return nums;
    }
};

int main() {
    vector<int> nums = {15,10,1,7,4,8,2,11,25,35,22,21,3,5,6,2};
    Solution sol;
    vector<int> num1 = sol.insertionsort(nums);
    for (int num : num1) {
        cout << num << " ";
    }
    return 0;
}
