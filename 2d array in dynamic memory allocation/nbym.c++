#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
    int column;
    cin>>column;

    int ** arr=new int*[n];
    for(int i =0;i<n;i++){
        arr[i]=new int[column];
    }
    
    for(int i =0;i<n;i++){
        for(int j=0;j<column;j++){
            cin>>arr[i][j];
        }
    }
    
    cout<<endl;
    for(int i =0;i<n;i++){
        for(int j=0;j<column;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    // releasing memory
    for(int i=0;i<n;i++){
        delete []arr[i];
    }
    delete []arr;
}