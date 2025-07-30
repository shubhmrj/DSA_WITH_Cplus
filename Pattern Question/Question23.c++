/* 
    1
   121
  12312
 1234123
123451234
*/

#include<iostream>
using namespace std;

int main(){
    int n , row =1;
    cout<<"Enter the no. of rows : ";
    cin>>n;

    while( row <=n){
        int space=row;
        while(space<=n-1){
            cout<<" ";
            
            space+=1;   
        }
        int column = 1;
        while(column<=row){
            cout<<column;

            column+=1;
        }
        int column1 = 1;
        while(column1<=row-1){
            cout<<column1;

            column1 +=1;
        }
        cout<<endl;
        row +=1;
    }
}