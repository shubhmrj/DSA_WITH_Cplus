#include<iostream>
#include<string>
#include<algorithm>>

using namespace std;

class Solution {
public:
    bool rotateString(string &s, string goal) {

        // first
        // for(int i = 0; i< s.size(); i++){
        //     string temp = s;
        //     rotate(temp.begin(), temp.begin() + i+1, temp.end());

        //     if(temp == goal)
        //         return true;

        // }
        // return false;

        // second

        string res = s+s;
        return (s.size() == goal.size()) &&
       ((res).find(goal) != string::npos);

    }
};

int main(){
    string s =  "abcde";
    string goal = "cdeab";

    Solution sol;

    cout << sol.rotateString(s, goal);

    return 0;
    
}