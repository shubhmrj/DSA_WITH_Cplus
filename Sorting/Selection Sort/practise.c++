#include<iostream>
#include<vector>
using namespace std;

class Solution {
    public:
        void selectiosort(vector<int> &nums){
            for(int i = 0; i< nums.size(); i++){
                int curr = i;

                for(int j = i+1 ;j <  nums.size(); j++){
                    
                    if(nums[curr] > nums[j]){
                        curr = j;
                    }
                }
                
                swap(nums[i], nums[curr]);
            }
        }
};

int main(){
    vector<int>nums = {15,10,1,7,4,8,2,11,25,35,22,21,3,5,6,2};
    Solution sol;
    sol.selectiosort(nums);
    for(int i=0;i<nums.size();i++){
        cout << nums[i] << " ";
    } cout << endl;
    return 0;
}