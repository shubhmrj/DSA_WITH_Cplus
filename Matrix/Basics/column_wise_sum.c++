#include<iostream>
using namespace std;

void isfound(int arr[][4]){
    int maxi =0;
    int index = 0;
    for(int i =0; i<3;i++){
        int sum =0;
        for(int j =0; j<4;j++){
            sum +=arr[i][j];
        }
        cout<<"sum: "<<sum <<" ";
        // maxi = max(maxi,sum);
        if(sum>maxi){
            maxi=sum;
            index = i;
        }
        cout<<"largest column is : "<<maxi<<" at column : " <<index;
    }
}

int main(){
    int arr[3][4];

    // row wise
    for(int i =0; i<4;i++){
        for(int j =0; j<3;j++){
            cin>>arr[j][i];
        }
    }


    for(int i =0; i<3;i++){
        for(int j =0; j<4;j++){
            cout<<arr[i][j]<<' ';
        }
        cout<<endl;
    }

    isfound(arr);
}