// palindrome
#include <iostream>
#include <cctype>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        int i = 0;
        int j = s.length() - 1;

        while (i < j) {

            // Compare lowercase versions
            if (tolower(s[i]) != tolower(s[j])) return false;

            i++;
            j--;
        }

        return true;
    }
};

int main() {
    string s = "abba";
    Solution sol;
    cout << sol.isPalindrome(s) << endl;  // Output: here boolalpha print true w/o alpha print false
}
