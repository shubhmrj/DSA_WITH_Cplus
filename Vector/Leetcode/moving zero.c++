#include<iostream>
#include<vector>
using namespace std;


class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i = 0;
        int j = nums.size()-1;
        while(i<j){
            if(nums[i]==0){
                nums.push_back(0);
                nums.erase(nums.begin() + i);
                j--;
            }
            else{
                i++;
            }
        }
        
    }
};


// time complexity o(n)
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != 0) {
                swap(nums[i], nums[j]); 
                j++;
            }
        }
    }
};

int main(){
    vector<int> nums = {0,0,1,0,3,12};
    Solution sol;
    sol.moveZeroes(nums);
    for(int n: nums){
        cout<<n<<" ";
    }
}