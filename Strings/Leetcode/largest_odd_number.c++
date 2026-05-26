#include<iostream>
#include<string>

using namespace std;

class Solution {
public:
    string largestOddNumber(string num) {
        
        
        for(int i = num.size()-1; i >=0; i--){

            int n = num[i] - '0';

            if( n % 2 !=0)
                return num.substr(0,i+1);
            
            n = n/10;
        }
        return "";
    }

};

int main(){
    string s =  "354272";

    Solution sol;

    cout << sol.largestOddNumber(s);

    return 0;
    
}