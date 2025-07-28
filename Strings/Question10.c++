// 680
#include <iostream>
#include <algorithm> 
using namespace std;

// class Solution {
// public:
//     void reverseString(string& s) {
//         for (int i = 0, j = s.size() - 1; i < j; i++, j--)
//             swap(s[i], s[j]); 
//     }
    
// };
class Solution {
public:
    bool validPalindrome(string s) {
        int i=0,j=s.size()-1;
        int count=0;
        while (i < j) {
            while (s[i] != s[j]  && count==0) {
                s.erase(i);
                count=count+1;
            }
            if (s[i] != s[j] && count==1) return false;
                
            i++;
            j--;
        }

        return true;

    }
};

int main() {
    string s = "abca";
    Solution sol;
    cout<<boolalpha<<sol.validPalindrome(s);
}
