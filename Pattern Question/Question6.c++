/*
1 
2 3 
3 4 5
4 5 6 7
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
            cout<<i+j-1<<" ";
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
}