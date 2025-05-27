#include<iostream>

using namespace std;

double taylor(int x,int y){

    static double p=1;
    static double f=1;
    double z;

    if (y==0)
        return 1;

    z=taylor(x,y-1);
    p=p*x;
    f=f*y;
    return  z+(p/f);

}

int main(){
    double p =taylor(1,5);
    cout<<p;
    return 0;
}