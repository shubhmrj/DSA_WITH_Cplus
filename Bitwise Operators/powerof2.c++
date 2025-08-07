#include<iostream>
using namespace std;

class Solution {
public:
    int isPowerOfTwo(int n) {
        int count =0;
        if (n==1){
            return true;
        }
        while(n>0 ){
            if(n&1 ){
                count++; 
            }
            n= n>>1;
        }
        if(count==1){
            return true;
        }
        else{
            return false;
        }
    }
    // int anotherapproach(){
    //     for(int i = 0; i <= 30; i++) {
    //         int ans = pow(2, i);
    //         if(ans == n) return true;
    //     }
    //     return false;

    // }
};


int main(){
    Solution sol;
    cout<<sol.isPowerOfTwo(256);
}