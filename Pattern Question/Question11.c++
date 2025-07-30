/*
A B C 
D E F 
G H I
*/

#include<iostream>
using namespace std;


int main(){
    int i=1,n;
    cout<<"Enter the number of rows";
    cin>>n;
    char alphabet = 'A';
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<alphabet <<" ";
            j=j+1;
            alphabet +=1;
        }
        cout<<endl;
        i=i+1;
    }
}