#include<iostream>
using namespace std;

int main(){
    int a=10;
    int &r = a;
    r++;
    cout<<"Value of a:"<<a<<endl;
    cout<<"value of reference:"<<r;
return 0;
}