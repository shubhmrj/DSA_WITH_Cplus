// 344
#include <iostream>
#include <vector>
#include <algorithm> 
using namespace std;

class Solution {
public:
    string reverseString(string s) {
        
        int j = 0;
        for(int i =0; i<s.length();i++){
            if(s[i]==' ' || i ==s.length()-1){
                int k = (s[i]= ' ') ? i-1 : i;
                while(j<k){
                    swap(s[j], s[k]);
                    j++;
                    k--;
                }
                j=i+1;
            }

        }
        return s;
    }
};

int main() {
    string s = "shubham Raj";
    Solution().reverseString(s);

    for (char reversestring : s) cout << reversestring;
    cout << endl;
}
