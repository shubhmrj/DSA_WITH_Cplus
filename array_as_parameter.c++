#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

int * func(int n){
    int *p;
    p=(int *)malloc(n* sizeof (int));
    return (p);
}

int main(){
    int *a;
    a=func(5);
    cout<<a;
}