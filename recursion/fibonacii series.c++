#include<iostream>

using namespace std;
int s=0;
int fib(int n){
    
    if (n==1)
        cout<< 1;

    fib(n-1);
    s=s+n;
    cout<<s;  
}

int main(){
    int p;
    fib(2);
    // cout<<p;
    return 0;
    
}