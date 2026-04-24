#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution{
    public:
        vector<vector<int>> threeSum(vector<int>& nums) {
            
            vector<vector<int>> res;
            sort(nums.begin(),nums.end());
            
            for(int i =0; i < nums.size() - 2; i++){

                if(i > 0 && nums[i] == nums[i-1] ) continue;

                int j = i+1;
                int k = nums.size()-1;

                while( j < k){
                    int sum  = nums[i] + nums[j] + nums[k];

                    if(sum == 0){
                        res.push_back({nums[i], nums[j], nums[k]});

                        while(j < k && nums[j] == nums[j+1] ) j++;
                        while(j < k && nums[k] == nums[k-1] ) k--;

                        j++;
                        k--;
                    }
                    else if(sum < 0){
                        j++;
                    }
                    else{
                        k--;
                    }
                }
            }
            return res;
        }

};

int main(){
    vector<int> nums = {-1,0,1,2,-1,-4};

    Solution sol;
    vector<vector<int>> nums1 = sol.threeSum(nums);

    for(int i = 0; i < nums1.size(); i++){
        for(int j = 0; j <nums1[i].size(); j++){
            cout << nums1[i][j] << " " ;
        }
    }
    return 0;
}