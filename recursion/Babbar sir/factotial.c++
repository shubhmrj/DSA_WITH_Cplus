#include<iostream>
using namespace std;

int factorial(long long n){
    if(n==0){
        return 1;
    }

    return n*factorial(n-1);

}

int main(){
    cout<<factorial(15);
}