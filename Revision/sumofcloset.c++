#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int firstthree = nums[0]+nums[1]+nums[3];
        for(int i=0; i<nums.size();i++){
            // if( a)
            int j =i+1;
            int k = nums.size()-1;
            
            while(j<k){
                int sum = nums[i]+nums[j]+nums[k];
                if(abs(sum-target)<abs(sum-firstthree)){
                    firstthree=sum;
                }
                if (sum < target) j++;
                else if (sum > target) k--;
                else return target;  
            }
        }
        return firstthree;
    }
};

int main(){
    vector<int> nums = {-1,2,1,-25};
    
    Solution sol;
    cout<<sol.threeSumClosest(nums,1);

}