// 7 leetcode

#include<iostream>
using namespace std;

class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum= 0;
        while(n!=0 ){
            int num= n % 10;
            if(sum > INT32_MAX/10 ||sum < INT32_MIN/10){
                return 0;
            }
            sum = sum * 10 + num;
            n= n/10;
        }
    return sum;
    }
};

int main(){
    Solution sol;
    cout<<sol.subtractProductAndSum(1534236469);
}