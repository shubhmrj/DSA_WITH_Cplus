#include<iostream>
using namespace std;

int factorial(int a ){
    int m =1317;
    long long sum =1;
    for(int i=1;i<=a;i++){
        sum = (sum *i)%m;
    }
    return sum;
}

int main(){
 cout<<factorial(212);
}