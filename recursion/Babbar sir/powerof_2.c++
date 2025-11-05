#include<iostream>
using namespace std;

int power(long long n){
    if(n==0){
        return 1;
    }

    return 2*power(n-1);

}

int main(){
    cout<<power(10);
}