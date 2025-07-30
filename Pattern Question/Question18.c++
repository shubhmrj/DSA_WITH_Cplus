/*
    *
   **
  ***
 ****
*****
*/

#include<iostream>
using namespace std;


int main(){
    int row=1,n;
    cout<<"Enter the number of rows";
    cin>>n;
    while(row<=n){
        int space=row;
        while(space<=n-1){
            cout<<" ";
            space=space+1;
        }
        int column =1;
        while(column<=row){
            cout<<"*";
            column=column+1;
        }
        cout<<endl;
        row=row+1;
    }
}