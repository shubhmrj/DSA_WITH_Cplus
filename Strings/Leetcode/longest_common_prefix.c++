#include<iostream>
#include<string>
#include<vector>

using namespace std;

class Solution {
public:
    string largestOddsber(vector<string>& s) {
        
        string ans;

        for(int i = 0; i < s[0].size(); i++){
            char ch = s[0][i];
            for(int j = 1; j< s.size(); j++){
                if (ch != s[j][i]){
                    return ans;
                }
            } 
            ans += ch;           
        }
        return ans;
    }

};

int main(){
    vector<string> s =  {"flower","flow","flight"};

    Solution sol;

    cout << sol.largestOddsber(s);

    // for(int i = 0; i < s[0].size(); i++){
    //     char ch = s[0][i] ;
    //         for(int j = 1; j< s.size(); j++){
    //             if (ch != s[j][i]){
    //                 cout<< s[j][i];
    //             }
    //         } 
    //         ans += ch;           
    //     }
            
    return 0;
    
}