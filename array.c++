#include<iostream>
using namespace std;

int main(){
    // int arr[] ={12,15,20,25,55};
    int n;
    cin>>n;
    int arr[n];
    
    for(int i=0 ;i<5 ;i++){
        cin>>arr[i];
    }
    for(int j=0; j<5; j++ ) {
        cout<<arr[j]<<endl;
    }

}
