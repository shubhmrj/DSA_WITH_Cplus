/*
A A A A A 
B B B B B
C C C C C
D D D D D
E E E E E
*/

#include<iostream>
using namespace std;


int main(){
    int i=1,n;
    cout<<"Enter the number of rows";
    cin>>n;
    while(i<=n){
        int j=1;
        while(j<=n){
            char alphabet = 'A'+ i-1;
            cout<<alphabet <<" ";
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
}