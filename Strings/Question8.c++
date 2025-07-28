// reverse vowel 345
#include <iostream>
#include <algorithm> 
#include<cstring>
using namespace std;


class Solution {
public:
    string reverseVowels(string s) {
        
        for (int i = 0, j = s.size() - 1; i < j; i++, j--){
            if ((s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') &&
                (s[j] == 'a' || s[j] == 'e' || s[j] == 'i' || s[j] == 'o' || s[j] == 'u')){
                    swap(s[i], s[j]);
                }
            }
            return s;
        }               
};

int main() {
    string s = {'e', 'e', 'l', 'l', 'o'};
    Solution sol;
    cout<<sol.reverseVowels(s);

}


// reverse vowel
#include <iostream>
#include <algorithm>
using namespace std;

class Solution {
public:
    bool isVowel(char c) {
        c = tolower(c);
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
    }

    string reverseVowels(string s) {
        int i = 0, j = s.size() - 1;

        while (i < j) {
            while (i < j && !isVowel(s[i])) i++;
            while (i < j && !isVowel(s[j])) j--;
            if (i < j) swap(s[i++], s[j--]);
        }

        return s;
    }
};

int main() {
    string s = "hello"; 
    Solution sol;
    string result = sol.reverseVowels(s);

    cout << result << endl; 
}
