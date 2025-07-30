/*
A 
B C 
C D E 
D E F G 
E F G H I 
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
            char alphabet = 'A'+i+j-2;
            cout<<alphabet <<" ";
            j=j+1;
            alphabet +=1;
        }
        cout<<endl;
        i=i+1;
    }
}