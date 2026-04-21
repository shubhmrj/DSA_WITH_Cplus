#include<iostream>
#include<vector>
#include<unordered_map>
#include<numeric>
#include <algorithm>
using namespace std;

class Solution {
    public:
        int longestConsecutive(vector<int>& nums) {
            sort(nums.begin(), nums.end());

            int count = 1;
            for(int i = 1; i< nums.size() ; i++ ){

                if (nums[i] == nums[i - 1] ) continue;

                if(nums[i] == nums[i-1] + 1){

                    cout<<" nums[i] : "<< nums[i] <<endl;
                    cout<<" nums[i+1] : "<< nums[i+1] <<endl;
                    cout<<" count : "<< count <<endl;

                    count++;
                }
                cout<<endl;
            }
            return count;
        }
};

int main(){
    vector<int> nums = {100,4,200,1,3,2};
    Solution sol;
    cout<<sol.longestConsecutive(nums)<< "     ";

    // for (int val : nums1) {
    //     cout << val <<" ";
    // }
    return 0;

}