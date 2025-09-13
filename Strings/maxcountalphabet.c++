// 344
#include <iostream>
#include <vector>
#include <algorithm> 
using namespace std;

class Solution {
public:
    int apl[26] = {0};
    char reverseString(string s) {
        int number = 0;
        for(int i =0; i<s.length();i++){
            char res = s[i];
            if(s[i]>='a' || s[i]<='z'){
                number= res -'a';
            }
            else{
                number= res -'A';
            }
            apl[number]++;
        }
        int max=-1 , count =0;
        for(int j =0; j<26 ;j++){
            if(max<apl[j]){
                count = j;
                max =apl[j];
            }
        }
        int re = 'a' + count;
        return re;
    }
};

int main() {
    string s = "shubham";
    Solution sol;
    cout<<sol.reverseString(s);


    // for (char reversestring : s) cout << reversestring;
    // cout << endl;
    // cout<<reve
}
