#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    bool check(vector<int>& nums) {
        int count = 0;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]>nums[i+1])
                count++;
            if(count>1)
                return false;
        }
        return true;
    }
};

int main(){
    vector<int> nums = {2,1,3,4};
    Solution sol;
    cout<<sol.check(nums);
}
