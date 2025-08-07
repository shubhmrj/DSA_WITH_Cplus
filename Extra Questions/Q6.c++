// 1281 leetcode

#include<iostream>
using namespace std;

class Solution {
public:
    int subtractProductAndSum(int n) {
        int num;
        int sum= 0;
        int mul = 1;
        int Total;
        while(n!=0){
            num= n % 10;
            sum+=num;
            cout<<"sum : "<<sum<<endl;
            mul= mul * num;
            cout<<"mul : "<<mul<<endl;
            n= n/10;
            Total = mul - sum;
        }
        return Total;
    }
};

int main(){
    Solution sol;
    cout<<sol.subtractProductAndSum(234);
}