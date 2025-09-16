#include <iostream>
#include <vector>
#include <algorithm> 
using namespace std;


class Solution {
public:
    string reorderSpaces(string text) {
        string res;
    
    bool inWord = false;
    for (int i= 0; i<text.length();i++) {
        if(text[i]!=' '){
            res.push_back(text[i]);
            inWord = true;
        }
        else if(text[i] == ' ' && inWord){
            res.push_back(' ');
            inWord = false;
        }
    }
    return res;
    }
};



int main() {
    string s = "shubham is bad one";
    Solution sol;
    cout<<sol.reorderSpaces(s);


    
}

