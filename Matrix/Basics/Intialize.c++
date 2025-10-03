#include<iostream>
using namespace std;

int main(){
    int arr[3][4];

    // row wise
    // for(int i =0; i<3;i++){
    //     for(int j =0; j<4;j++){
    //         cin>>arr[i][j];
    //     }
    // }
    // output
    /*
    1 2 3 4 
    5 6 7 8 
    9 10 11 12
    */

    // column wise
    // for(int i =0; i<4;i++){
    //     for(int j =0; j<3;j++){
    //         cin>>arr[j][i];
    //     }
    // }
    /*
    1 4 7 10 
    2 5 8 11 
    3 6 9 12
    */

    for(int i =0; i<3;i++){
        for(int j =0; j<4;j++){
            cout<<arr[i][j]<<' ';
        }
        cout<<endl;
    }


}