/*
11111
 2222
  333
   44
    5
*/

#include<iostream>
using namespace std;

int main(){
    int i=1,n;
    cout<<"Enter the number of interger you want to print star:";
    cin>>n;

    while(i<=n){
        int k=1;
        while(k<=i-1){
            cout<<" ";
            k=k+1;
        }
        int j=i;
        while(j<=n){
            cout<<i;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
}