#include<iostream>
using namespace std;

// int fib(int n) {
//     if (n <= 1) return n;  // Base cases: fib(0)=0, fib(1)=1
//     return fib(n - 1) + fib(n - 2);
// }

class Solution {
public:
    int fib(int n) {
        if (n == 0) return 0;
        int prev = 0, curr = 1, next;
        for (int i = 1; i < n; i++) {
            next = prev + curr;
            prev = curr;
            curr = next;
        }
        return curr;
    }
};

int main(){
    int number;
    cout<<"Enter the number you want fibanci series : ";
    cin>> number;
    Solution sol;
    sol.fib(number);
    for (int i = 0; i < number; i++) {
        cout << sol.fib(i) << " ";
    }
    
}