#include<iostream>
#include<vector>
// #include<numeric>
#include<unordered_map>

using namespace std;

class Solution {
public:
    int longestSubarray(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> sumstored(n,0);
        unordered_map<int, int> mapping;

        int count = 0;
        sumstored[0] = nums[0];
        int maxi = 0;

        for(int i = 1; i < nums.size(); i++){
            sumstored[i] = nums[i] + sumstored[i-1];
            cout<<"sumstored : "<<sumstored[i]<<endl;

        }

        for(int j = 0; j < sumstored.size(); j++){ 

            int val = sumstored[j] - k;
            
            if(mapping.find(val) != mapping.end()){
                
                maxi = max(maxi, j - mapping[sumstored[j] - k]);

            }

            if(mapping.find(sumstored[j]) == mapping.end()){
                mapping[sumstored[j]] = j;
            }
        }
        return maxi;
    }
};

int main(){
    vector<int> nums ={-3, 2, 1};

    Solution sol;

    cout<<sol.longestSubarray(nums,15);

}