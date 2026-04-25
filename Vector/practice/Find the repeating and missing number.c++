#include<iostream>
#include<vector>
#include<unordered_map>
#include <numeric>
using namespace std;

class Solution {
public:
    vector<int> findMissingRepeatingNumbers(vector<int> nums) {
        long long sum = accumulate(nums.begin(), nums.end(), 0);
        int n = nums.size();
        long long naturalsum = (long long)(n*(n+1))/2;
        unordered_map<int, int> mapping;
        int number = 0;

        for(int num : nums){
            mapping[num]++;
        }

        for(auto& i : mapping){
            if(i.second > 1){
                number = i.first;
            }
        }
        int missingnumber = naturalsum - sum + number;
        cout<< naturalsum<<endl;
        cout<<sum<<endl;
        return {number, missingnumber};

    }
};

int main(){
    vector<int> nums = {1,5,4,3,1};

    Solution sol;
    vector<int> res = sol.findMissingRepeatingNumbers(nums);

    for(int num : res){
            cout << num << " " ;
        
    }
    return 0;
}