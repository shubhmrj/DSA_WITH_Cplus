// 191 leetcode

#include<iostream>
using namespace std;

class Solution {
public:
    int hammingWeight(int n) {
        int count = 0;
        while(n!=0){
            if(n&1){
                count++;
            }
           n= n>>1;
        }
        return count;
    }
};

int main(){
    Solution sol;
    cout<<sol.hammingWeight(128);
}