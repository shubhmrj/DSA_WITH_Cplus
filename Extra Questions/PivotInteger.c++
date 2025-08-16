#include<iostream>
using namespace std;

class Solution {
public:
    int pivotInteger(int n) {
        int sum = n*(n+1)/2;
        for(int i =1; i<=n; i++){
            int num = i*(i-1)/2;
            int val = i*(i+1)/2;
            int ex = sum-num;
            if(val == ex){
                return i;
            }
        }
        return -1;
    }
};

int main (){
    int n = 8;
    Solution sol;
    cout<<sol.pivotInteger(n);
}