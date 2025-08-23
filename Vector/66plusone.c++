#include<iostream>
#include<vector>
#include<algorithm>
#include <bits/stdc++.h>

using namespace std;



// class Solution {
// public:
//     vector<int> plusOne(vector<int>& digits) {
//         int res = 0;
//         int n = digits.size();
//         for(int i = 0; i<n; i++){
//             res=res*10 + digits[i];
//         }
//         res+=1;
//         int length = to_string(abs(res)).length();
//         digits.resize(length);
//         while(res>0){
//             int a = res %10;
//             digits[length-1] = a;
//             res=res/10;
//             length--;
//         }
//         return digits;
//     }
// };

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        
        // Start from the last digit
        for (int i = n - 1; i >= 0; i--) {
            if (digits[i] < 9) {
                digits[i]++;
                cout<<digits[i];
                return digits;
            }
            digits[i] = 0; // carry over
        }
        
        // If all were 9 → need one more digit
        digits.insert(digits.begin(), 1);
        return digits;
    }
};

int main(){
    vector<int> digits = {9,1,5,4,3};
    Solution sol;
    digits = sol.plusOne(digits);
    for(int r:digits){
        cout<< r<<" ";
    }
    cout<<endl;
    
    
}