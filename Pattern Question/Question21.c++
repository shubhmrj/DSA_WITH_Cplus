/* 
    1
   22
  333
 4444
55555
*/

#include<iostream>
using namespace std;

int main(){
    int n , i =1;
    cout<<"Enter the no. of rows : ";
    cin>>n;

    while(i<=n){
        int space=i;
        while(space<=n-1){
            cout<<" ";
            
            space+=1;   
        }
        int column = 1;
        while(column<=i){
            cout<<i;

            column+=1;
        }
        cout<<endl;
        i +=1;
    }
}