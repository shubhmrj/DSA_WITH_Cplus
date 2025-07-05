#include<iostream>

using namespace std;

/*int add(int a ,int b){
    int c= a+b;
}

int main(){
    int x ,y,z;
    x=10;
    y=12;
    z=add(x,y);
    cout<<"addition:"<<z;
}*/

// parameter Passing(Pass by value)
/*int swap(int x,int y){
    int temp=x;
    x=y;
    y=temp;
}

int main(){
    int a=10, b=20;
    swap(a,b);
    cout<<"value of a:"<<a<<endl<<"Value of b:"<<b;
}*/


// Pass by address
int swap(int *x,int *y){
    int temp=*x;
    *x=*y;
    *y=temp;
}

int main(){
    int a=10, b=20;
    swap(&a,&b);
    cout<<"value of a:"<<a<<endl<<"Value of b:"<<b;
}

