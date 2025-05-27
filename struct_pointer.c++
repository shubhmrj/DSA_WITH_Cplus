#include<iostream>
#include<stdio.h>

using namespace std;

struct rectangle{
    int length=10;
    int breadth=12;
};

int main(){
    // Dynamically allocated the value of recatangle in heap
    struct rectangle *p;
    p = (struct rectangle *)malloc(sizeof(rectangle));

    p->length=55;
    cout<<p->length<<endl;
    // this gives garbage value of breadth
    cout<<p->breadth;
    
    /*this simply allocated in stack memory and give derefrence to pointer
    
    struct rectangle r;
    struct rectangle *p =&r;
    // in c++ assign update value of rectangle
    (*p).length=25;
    // in c
    p->breadth=10;

    cout<<"length:"<<r.length<<endl<<"breadth:"<<r.breadth<<endl;
    cout<<" Value stored on which address of rectangle  r:"<<p<<endl<<"Value of Rectangle breadth"<<p->breadth;*/
}