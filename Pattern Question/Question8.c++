/*
1
2 1
3 2 1
4 3 2 1
5 4 3 2 1
*/

#include<iostream>
using namespace std;


int main(){
    int i=1,n;
    cout<<"Enter the number of rows";
    cin>>n;

    while(i<=n){
        int j=1;
        int reverse=i;
        while(j<=i){
            // cout<<reverse<<" ";
            cout<<i-j+1<<" ";
            j=j+1;
            reverse=reverse-1;
        }
        cout<<endl;
        i=i+1;
    }
}