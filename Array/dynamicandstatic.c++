#include<iostream>
using namespace std;

int main(){
    int arr[5]={1,2,3,4,5}; // Static array declaration
    int *p;
    p=new int[5]; // Dynamic array declaration
    p[0]=1;
    p[1]=5;
    p[2]=8;
    p[3]=9; // Assigning values to the dynamic array
    p[4]=10;
    cout<<"Static array: ";

    for (int i=0; i<5; i++){
        cout<<arr[i]<<" "; // Printing static array elements
    }
    cout<<endl;
    cout<<"Dynamic array: ";
    for (int i=0; i<5; i++){
        cout<<p[i]<<" "; // Printing dynamic array elements
    }
    delete[] p; // Freeing the dynamically allocated memory
    cout<<endl;
}