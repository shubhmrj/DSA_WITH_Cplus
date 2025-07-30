/*
1 2 3 
4 5 6 
7 8 9 
*/

#include<iostream>
using namespace std;


int main(){
    int i=1,n,counting=1;
    cout<<"Enter the number of rows";
    cin>>n;

    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<counting<<" ";
            j=j+1;
            counting=counting+1;
        }
        cout<<endl;
        i=i+1;
    }
}