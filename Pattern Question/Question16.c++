/*
D 
C D
B C D
A B C D 
@ A B C D
*/

#include<iostream>
using namespace std;


int main(){
    int i=1,n;
    cout<<"Enter the number of rows";
    cin>>n;
    while(i<=n){
        int j=1;
        while(j<=i){
            char alphabet = 'D'-i+j;
            cout<<alphabet <<" ";
            j=j+1;
            alphabet -=1;
        }
        cout<<endl;
        i=i+1;
    }
}