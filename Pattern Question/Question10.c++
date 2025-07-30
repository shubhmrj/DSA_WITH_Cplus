/*
A B C D E 
A B C D E
A B C D E
A B C D E
A B C D E
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
            char alphabet = 'A'+ j-1;
            cout<<alphabet <<" ";
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
}