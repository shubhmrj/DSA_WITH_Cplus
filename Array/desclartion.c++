#include<iostream>
using namespace std;
int main(){
    // int arr[]={1,2,3,4,5};
    // int arr[5];
    int arr[5] = {1, 2, 3, 4}; // Initializing an array with values
    // int arr[5] = {1, 2}; // Partially initializing an array
    // int arr[5] = {}; // Initializing an array with all elements as zero
    // int arr[5] = {0}; // Initializing the first element to zero
    for(int i=0;i<5;i++){
        cout<<&arr[i]<<" ";
    }
    return 0;
}