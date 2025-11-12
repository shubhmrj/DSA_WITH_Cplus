#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


class Solution {
public:
    int power(int n,int m) {
        if(m==0){
            return 1;
        }
        if(m==1){
            return n;
        }

        int half=power(n,m>>1);
        int res=half*half;
        if(m&1){
            res = res*n;
        }
        n=n * n;
        return res;
    }
};


int main() {
    Solution sol;
    cout<<sol.power(2,8);
    
   
    return 0;
}