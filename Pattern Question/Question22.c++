/* 
    11
   2222
  333333
 44444444
5555555555
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
            cout<<row;

            column+=1;
        }
        int column1 = 1;
        while(column1<=row){
            cout<<row;

            column1 +=1;
        }
        cout<<endl;
        row +=1;
    }
}