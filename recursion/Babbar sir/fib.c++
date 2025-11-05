#include<iostream>
using namespace std;

int fib(long long n){
    if(n==0){
        return 0 ;
    }
    if(n==1){
        return 1;
    }

    return fib(n-1)+fib(n-2);
    cout<<n<<" ";

}

int main(){
    cout<<fib(4);
}