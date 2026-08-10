#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int rob(vector<int>& nums) {
        int sum = 0 , sum1=0 ;
        int sz= nums.size();
        for(int i = 0 ; i<sz;i++){
            int j=i+2;
            while(j<sz){
                sum=nums[i]+nums[j];
                if(sum>sum1){
                    sum1=sum;
                    j=j+2;
                }
                // j++;
            }
        }
        return sum1;
    }
};

int main() {
    vector<int> nums = {2,7,9,3,1};
    Solution sol;
    cout<<sol.rob(nums);

    return 0;
}
