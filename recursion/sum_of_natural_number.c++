#include <iostream>

using namespace std;

int recursion(int n){
    static int x=0;
    
    if (n>0){

        recursion(n-1);   
        x=x+n;
        return x;
    }

}

int main(){
    int p;
    p=recursion(10);
    cout<<p;
    return 0;
    
}