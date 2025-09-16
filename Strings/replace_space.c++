// 344
#include <iostream>
#include <vector>
#include <algorithm> 
using namespace std;

class Solution {
public:
    string reverseString(string s) {
        string result;
        for (int i = 0; i < s.length(); ++i) {
            if(s[i] == ' '){
                result += "@40";
            }
            else{
                result += s[i];
            } 
        }
    return result;
    }
};

int main() {
    string s = "shubham is bad one";
    Solution sol;
    cout<<sol.reverseString(s);


    // for (char reversestring : s) cout << reversestring;
    // cout << endl;
    // cout<<reve
}
