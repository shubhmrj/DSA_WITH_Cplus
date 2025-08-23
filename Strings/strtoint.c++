// // compairing strings only in same case if you want to compare sting so first change into same case

// #include<iostream>
// #include <climits>

// using namespace std;

// class Solution {
// public:
//     int myAtoi(string s) {
//         int i;
//         string ans = "";
//         int n=s.length();
//         if ((s[0] > 58 && s[0] < 92) || (s[0] > 95 && s[0] < 127)) {
//             return 0;
//         }
//         for( i= 0; s[i]!='\0'; i++ ){
//             if(s[i]==32 ){
//                 continue;
//             }
//             int sign = 1;
//             if (s[i] == '-' || s[i] == '+') {
//                 if (s[i] == '-') sign = -1;
//                 i++;
//                 }
//             else if (s[i] >= '0' && s[i] <= '9' ){
//                 ans += s[i];
//             }
//             else{
//                 break;
//             }
//         }
//         long long int num = stoll(ans);
//         if (num >  INT_MAX) return INT_MAX;
//         if (num <  INT_MIN) return INT_MIN;
//         return num;
//         }
// };
// // auto init = atexit([]() { ofstream("display_runtime.txt") << "0"; });

// int main(){
//     string s = "-91283472332";
//     Solution sol;
//     cout<<sol.myAtoi(s);
// }


#include <iostream>
#include <climits>
using namespace std;

class Solution {
public:
    bool isNumber(string s) {
        int i = 0, n = s.size();
        while (i < n && s[i] == '.') return false; // skip leading spaces

        int sign = 1;
        if (i < n && sign==1 && (s[i] == '-' || s[i] == '+')) {
            if (s[i] == '-') sign = -1;
            i++;
        }

        long long num = 0;
        while (i < n && s[i] >= '0' && s[i] <= '9') {
            return true;
            // num = num * 10 + (s[i] - '0');
            // if (sign * num > INT_MAX) return INT_MAX;
            // if (sign * num < INT_MIN) return INT_MIN;
            i++;
        }

        return false;
    }
};

int main() {
    string s = "4.";
    Solution sol;
    cout << sol.isNumber(s) << endl; // Output: -2147483648 (clamped)
}
