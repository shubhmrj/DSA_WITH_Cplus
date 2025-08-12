#include<iostream>
using namespace std;

int fib(int n) {
    if (n <= 1) return n;  // Base cases: fib(0)=0, fib(1)=1
    return fib(n - 1) + fib(n - 2);
}
int main(){
    int number;
    cout<<"Enter the number you want fibanci series : ";
    cin>> number;
    
    for (int i = 0; i < number; i++) {
        cout << fib(i) << " ";
    }
    
    
    // int current = 0, result=1,curr=0;
    // for (int i=0; i<number;i++){
    //     if(i<2){
    //         current=i;
    //         cout<<current;

    //     }
    //     else{
    //         int previous=curr;
    //         curr=result;
    //         result=curr+previous;
    //         cout<<result;
    // }
    // }
}