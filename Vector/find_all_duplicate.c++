// find duplicate

// #include <iostream>
// #include <vector>
// #include <unordered_map>
// using namespace std;

// class Solution {
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
//                 // cout << p.first << " appears " << p.second << " times\n";
//                 return p.first;
//             }
//         }
//     }
// };


#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> findDuplicate(vector<int>& arr) {
        vector<int> res;
        int size = arr.size();
        
        int maxVal = *max_element(arr.begin(), arr.end()); // max positive number
        vector<int> temp(maxVal + 1, 0); // exact size ka vector
        
        // frequency count
        for (int i = 0; i < size; i++) {
            temp[arr[i]]++;
        }

        // print frequencies > 1
        for (int i = 1; i <= maxVal; i++) {
            if(temp[i]>1){
                // cout << "Value: " << i << " Count: " << temp[i] << endl;
                res.push_back(i);
            }
        }
     return res;   
    }
};

int main() {
    vector<int> arr = {3, 11, 3,5,6,7,12, 4, 2 , 5,3};
    Solution sol;
    vector<int> res = sol.findDuplicate(arr);
    for(int i = 0; i<res.size();i++){
        cout<<res[i]<<" ";
    }
    return 0;
}


