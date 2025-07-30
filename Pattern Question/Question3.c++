/*
*****
****
***
**
*
*/

#include<iostream>
using namespace std;

int main(){
    int i=1,n;
    cout<<"Enter the number of interger you want to print star:";
    cin>>n;

    while(i<=n){
        int j=i;
        while(j<=n){
            cout<<"*";
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
}