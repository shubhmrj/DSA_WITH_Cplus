/*
*****
*****
*****
*****
*****
*/

#include<iostream>
using namespace std;

// int main(){
//     int i=1,n;
//     cout<<"Enter the number of interger you want to print star:";
//     cin>>n;
//     while(i<=n){
//         int j=1;
//         while(j<=n){
//             cout<<"*";
//             j=j+1;
//         }
//         cout<<endl;
//         i=i+1;
//     }
// }


/*
11111
22222
33333
44444
55555
*/

int main(){
    int i=1,n,number=1;
    cout<<"Enter the number of interger you want to print star:";
    cin>>n;
    while(i<=n){
        int j=1;
        while(j<=n){
            // cout<<number;
            cout<<i;           //both will work; 
            j=j+1;  
        }
        number=number+1;
        cout<<endl;
        i=i+1;
    }
}