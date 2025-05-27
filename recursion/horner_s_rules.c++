#include<iostream>

using namespace std;

double taylor(int x,int y){
    static double s=1;
    if(y==0)
        return s;

    s=1+(x/y)*s;
    
    return taylor(x,y-1);
}

int main(){
    double p =taylor(5,5);
    cout<<p;
    return 0;
}