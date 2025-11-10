#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


class Solution {
public:
    int reversestring(string &arr,int i ,int size ) {
        if(i==size/2){
            return false;
        }
        swap(arr[i],arr[size-i]);
        i++;
        reversestring(arr,i,size);
        return 0;
    }
};


int main() {
    string arr = "shubhami";
    Solution sol;
    sol.reversestring(arr,0,arr.length()-1);
    for(int i=0;i<arr.length();i++){
        cout<<arr[i];
    }
    return 0;
}