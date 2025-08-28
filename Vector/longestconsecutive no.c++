// 128

// longest consecutive number;
#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>
using namespace std;

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_map<int, int> temp;
        int count =0;        
        for(int i : nums){
            temp[i]++;
        }
        
        for (auto &p : temp) {
            // if(temp[0]>=1 &&  ){
            //     count++;
            // }
                cout << p.first << " appears " << p.second << " times\n";
            if (p.second != 0) {
                // cout << p.first << " appears " << p.second << " times\n";
                count++;
                // break;            
            }
        }
        return count;
    }
};



int main() {
    vector<int> nums = {9,1,4,7,3,-1,0,5,8,-1,6};
    Solution sol;
    cout<<sol.longestConsecutive(nums);
    return 0;
}
