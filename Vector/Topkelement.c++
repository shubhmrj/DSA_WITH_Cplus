// find duplicate

#include <iostream>
#include <vector>
#include<algorithm>
#include <unordered_map>
using namespace std;
// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// class Solution {
// public:
//     vector<int> findDuplicate(vector<int>& arr) {
//         vector<int> res;
//         int size = arr.size();
        
//         int maxVal = *max_element(arr.begin(), arr.end()); // max positive number
//         vector<int> temp(maxVal + 1, 0); // exact size ka vector
        
//         // frequency count
//         for (int i = 0; i < size; i++) {
//             temp[arr[i]]++;
//         }

//         // print frequencies > 1
//         for (int i = 1; i <= maxVal; i++) {
//             if(temp[i]>1){
//                 // cout << "Value: " << i << " Count: " << temp[i] << endl;
//                 res.push_back(i);
//             }
//         }
//      return res;   
//     }
// };

// class Solution1 {
// public:
//     int findDuplicate(vector<int>& arr) {
//         unordered_map<int, int> freq;

//         // Count frequency of each number
//         for (int num : arr) {
//             freq[num]++;
//         }

//         // Print duplicates
//         for (auto &p : freq) {
//             if (p.second > 1) {
//                 cout << p.first << " appears " << p.second << " times\n";
//                 return p.first;
//             }
//         }
//     }
// };
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int ,int> top;
        
        // int size=nums.size();
        vector<int>res;
        // if(nums.size()==1) res.push_back(nums[0]);
        for (int ele : nums){
            top[ele]++;
        }
        for (auto &p : top) {
            
            if(k>0){
                res.push_back(p.first);
                k--;
            }
        }
        sort(res.begin(),res.end());
        return res;
    }
};


int main() {
    vector<int> arr = {1,1,1,2,2,3};
    Solution sol;
    int k=2;
    // Solution1 sol1;
    // sol1.findDuplicate(arr);
    vector<int> res = sol.topKFrequent(arr ,k);
    for(int i = 0; i<res.size();i++){
        cout<<res[i]<<" ";
    }
    return 0;
}


