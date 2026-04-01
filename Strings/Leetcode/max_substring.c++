#include<iostream>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxi = 0;

        for (int i = 0; i < s.size(); i++) {
            string c = "";
            int count = 0;

            for (int j = i; j < s.size(); j++) {
                if (c.find(s[j]) != string::npos) // duplicate found
                    break;
                c += s[j];
                count++;
            }
            maxi = max(maxi, count);
        }

        return maxi;
    }
};

int main(){
    string s = "bcacbc";

    Solution sol;
    cout<<sol.lengthOfLongestSubstring(s);
}