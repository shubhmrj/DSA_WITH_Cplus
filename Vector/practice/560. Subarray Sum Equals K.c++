#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> sumstored(n,0);
        unordered_map<int, int> mapping;

        int count = 0;
        sumstored[0] = nums[0];

        for(int i = 1; i < nums.size(); i++){
            sumstored[i] = nums[i] + sumstored[i-1];
            cout<<"sumstored : "<<sumstored[i]<<endl;

        }

        for(int j = 0; j < sumstored.size(); j++){
            

            if(sumstored[j] == k) count++;

            int val = sumstored[j] - k;
            
            if(mapping.find(val) != mapping.end()){
                
                count += mapping[val];
            }

            // if(mapping.find(sumstored[j]) == mapping.end()){
            //     mapping[sumstored[j]] = 0;
            // }
            mapping[sumstored[j]]++;
        }
        return count;
    }
};

int main(){
    vector<int> nums ={10, 5, 2, 7, 1,};

    Solution sol;
    cout<<sol.subarraySum(nums,15);

}