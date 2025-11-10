#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    vector<vector<int>> foursum(vector<int>& nums, int target) {
        vector<vector<int>> res;
        sort(nums.begin(), nums.end());
        for(int i=0; i<nums.size();i++){
                if(i>0 && nums[i]==nums[i-1]) continue;
                for(int j=0; j<nums.size();j++){
                    if(j>i && nums[j]==nums[j-1]) continue;
                    int k =i+1;
                    int l = nums.size()-1;
                
                    while(k<l){
                        int sum = nums[i]+nums[j]+nums[k]+nums[l];
                        if(sum==target){
                            res.push_back({nums[i], nums[j], nums[k], nums[l]});
                            while(k<l && nums[l]==nums[l-1]) k++;
                            while(k<l && nums[k]==nums[k-1]) l--;
                        }
                        else if (sum > target) l--;
                        else k++; 
                    }
            }
        }
        return res;
    }
};

int main(){
    vector<int> nums = {-1,2,1,-25};
    
    Solution sol;
    
    cout<<sol.foursum(nums,1);
}