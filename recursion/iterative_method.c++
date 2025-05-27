#include<iostream>

using namespace std;

double iterative(double x,double n){

    double  s=1;
    double num=1;
    double del=1;
    int i;
    for(i=1;i<=n;i++){
        num*=x;
        del*=i;
        s+=x/i;
        
    }
    // cout<<s;
    return s;

}

int main(){
    cout<<iterative(1,10);
    return 0;
}