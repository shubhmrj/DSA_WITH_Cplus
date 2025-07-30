/* 
1 2 3 4 5 5 4 3 2 1 
1 2 3 4 * * 4 3 2 1 
1 2 3 * * * * 3 2 1
1 2 * * * * * * 2 1 
1 * * * * * * * * 1
*/

#include<iostream>
using namespace std;

int main(){
    int n , row =1;
    cout<<"Enter the no. of rows : ";
    cin>>n;

    while( row <=n){
        int column = row;
        while(column<=n){
            cout<<column-row+1<<" ";

            column+=1;
        }
        int space=1;
        while(space<=row-1){
            cout<<"*"<<" ";
            
            space+=1;   
        }
        int space1=1;
        while(space1<=row-1){
            cout<<"*"<<" ";
            
            space1 +=1;   
        }
        int column1 = row;
        while(column1<=n){
            cout<<n-column1+1<<" ";

            column1 +=1;
        }
        cout<<endl;
        row +=1;
    }
}