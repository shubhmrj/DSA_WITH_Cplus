#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

// int main(){
//     // int a=5;
//     int A[5]={4,6,9,7,5};
//     int *p;
//     p=A;
//     p=&A[3];
//     // *p default shown A[0] value.
//     cout<<*p;
//     //its shows A[3] value
//     cout<<*p; 
    
// }

int main(){
    int *p;
    // for c assign malloc to access heap(dynamically allocated memory)
    p= new int[5];
    // for c assign malloc to access heap
    p=(int *)malloc (5 * sizeof (int));
    // p[5]={4,6,8,10,12};
    p[0]=1; p[1]=2; p[2]=6; p[3]=9; p[4]=8; p[5]=10;


    for(int i=0; i<=5 ;i++){
    cout<<p[i]<<endl;
    } 

    //  to need free up memory space
    // for c++
    delete [] p;
    // for c
    free(p);
    return 0;
}