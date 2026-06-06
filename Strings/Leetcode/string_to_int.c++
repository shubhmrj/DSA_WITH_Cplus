#include<iostream>
#include<string>
#include <climits>

using namespace std;

class Solution {
public:
    int myAtoi(string s) {
        long long int digit = 0;
        int sign = 1;
        int i = 0;
        
        while(i < s.size() && s[i] == ' ') i++;

            
        if(s[i] == '-' || s[i] == '+'){


            if(s[i] == '-' && digit == 0){
                sign = -1;
            }
            i++;
        }

        while(i < s.size() && isdigit(s[i])){
            digit = digit * 10 + (s[i] - '0');
            i++;
        }

        digit *= sign;

        if(digit > INT_MAX)
            return INT_MAX;

        if(digit < INT_MIN)
            return INT_MIN;
            
        return digit;
    }
};

int main(){

    string s = "   -042jh4568";

    Solution sol;

    cout<<sol.myAtoi(s);
}
class Solution {
public:
    int myAtoi(string s) {
        int i = 0;
        int digit = 0;
        int sign = 1;
        int n = s.size();

        while(i < n && s[i] == ' ')
            i++;

        if(i < n && (s[i] == '-' || s[i] == '+')) {
            if(s[i] == '-')
                sign = -1;
            i++;
        }

        while(i < n && isdigit(s[i])) {
            int ch = s[i] - '0';
            digit = digit * 10 + ch;
            if(sign == 1) {
                if(digit > INT_MAX / 10 ||
                   (digit == INT_MAX / 10 && ch > 7))
                    return INT_MAX;
            } else {
                if(digit > INT_MAX / 10 ||
                   (digit == INT_MAX / 10 && ch > 8))
                    return INT_MIN;
            }

            i++;
        }

        return digit * sign;
    }
};