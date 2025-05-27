#include <iostream>
using namespace std;

int fact(int n){
    static int p=1;
    if(n>0){
        fact(n-1);
        p=p*n;
        return p;
    }

}

int main(){
    int k;
    k=fact(30);
    cout<<k;
}