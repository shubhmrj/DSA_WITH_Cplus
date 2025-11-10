#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


class Solution {
public:
    bool isplaindrome(string &arr,int i ,int size ) {
        if(i==size/2){
            return false;
        }
        if(arr[i]==arr[size-i])
            i++;
        else{
            return false;
        }
        isplaindrome(arr,i,size);
        return true;
    }
};


int main() {
    string arr = "abbabab";
    Solution sol;
    int res=sol.isplaindrome(arr,0,arr.length()-1);
    cout<<endl;
    if(res){
        cout<< "This string is palindrome";
    }
    else{
        cout<< "This string is not palindrome";
    }
    cout<<endl;
    return 0;
}