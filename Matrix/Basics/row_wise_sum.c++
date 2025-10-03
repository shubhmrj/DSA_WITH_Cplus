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
        cout<<endl;
    }
    cout<<"largest row is : "<<maxi<<" at row : " <<index;
}

int main(){
    int arr[3][4] ={1,2,3,4,5,6,7,8,9,10,11,12};

    // row wise
    // for(int i =0; i<3;i++){
    //     for(int j =0; j<4;j++){
    //         cin>>arr[i][j];
    //     }
    // }


    for(int i =0; i<3;i++){
        for(int j =0; j<4;j++){
            cout<<arr[i][j]<<' ';
        }
        cout<<endl;
    }

    isfound(arr);
}