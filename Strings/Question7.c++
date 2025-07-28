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
            // Skip non-alphanumeric from the front
            while (i < j && !isalnum(s[i])) i++;
            // Skip non-alphanumeric from the back
            while (i < j && !isalnum(s[j])) j--;

            // Compare lowercase versions
            if (tolower(s[i]) != tolower(s[j])) return false;

            i++;
            j--;
        }

        return true;
    }
};

int main() {
    string s = "A man, a plan, a canal: Panama";
    Solution sol;
    cout << boolalpha << sol.isPalindrome(s) << endl;  // Output: here boolalpha print true w/o alpha print false
}
