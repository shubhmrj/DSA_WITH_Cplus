#include <iostream>
using namespace std;

class Solution {
public:
    char findTheDifference(string s, string t) {
        char res = 0;
        for (char c : s) res ^= c;
        for (char c : t) res ^= c; 
        return res;
    }
};

int main() {
    string s = "abcd";
    string t = "abcde";

    Solution sol;
    cout << "Extra character: " << sol.findTheDifference(s, t) << endl;
    return 0;
}
