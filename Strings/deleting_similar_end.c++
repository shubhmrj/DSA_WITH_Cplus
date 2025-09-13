#include<iostream>
#include<string>
using namespace std;

class Solution {
public:
    int minimumLength(string s) {
        int j = s.length()-1;
        int i =0;
        while(i<j && s[i]==s[j]){
                char c = s[i];
                while(i<=j && s[i]== c ){
                    i++;
                }
                while( i<=j && s[j]== c){
                    j--;
                }   
        }
        return j-i;
    }
};
int main(){
    string s ="aabccabba";
    Solution sol;
    cout<<sol.minimumLength(s);
}