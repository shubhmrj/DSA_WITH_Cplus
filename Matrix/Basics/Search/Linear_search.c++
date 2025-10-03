#include<iostream>
using namespace std;

bool isfound(int arr[][4], int element ){
    for(int i =0; i<3;i++){
        for(int j =0; j<4;j++){
            if(element==arr[i][j]){
                return true;
            }
        }
    }
    return false;
}

int main(){
    int arr[3][4];

    // row wise
    for(int i =0; i<3;i++){
        for(int j =0; j<4;j++){
            cin>>arr[i][j];
        }
    }


    for(int i =0; i<3;i++){
        for(int j =0; j<4;j++){
            cout<<arr[i][j]<<' ';
        }
        cout<<endl;
    }

    if(isfound(arr,25)){
        cout<<"element found";
    }
    else{
        cout<<"element not found.";
    }

}