#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


class Solution {
public:
    int reversestring(string &arr,int i ,int j ) {
        if(i>j){
            return false;
        }
        swap(arr[i],arr[j]);
        i++;
        j--;
        reversestring(arr,i,j);
        return 0;
    }
};


int main() {
    string arr = "shubham";
    Solution sol;
    sol.reversestring(arr,0,arr.length()-1);
    for(int i=0;i<arr.length();i++){
        cout<<arr[i];
    }
    
   
    return 0;
}