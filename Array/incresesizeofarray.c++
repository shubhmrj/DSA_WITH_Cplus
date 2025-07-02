#include<iostream>
using namespace std;

int main(){
    int *p=new int[5]; // Dynamically allocate an array of size 5
    int *q=new int[10]; // Dynamically allocate another array of size 10
    p[0]=1;
    p[1]=2;
    p[2]=3;
    p[3]=4; // Assigning values to the dynamic array
    p[4]=5;
    cout<<"Original array: ";

    for(int i=0; i<5; i++){
        cout<<p[i]<<" "; // Printing original array elements
    }
    cout<<endl;
    // Resizing the array
    for (int i=0; i<5; i++){
        q[i]=p[i]; // Copying elements from the original array to the new array
    }
    delete[] p; // Freeing the original array memory
    p=q; // Pointing p to the new array
    q=nullptr; // Setting q to nullptr to avoid dangling pointer
    cout<<"Resized array: ";
    for(int i=0; i<10; i++){
        cout<<p[i]<<" "; // Printing resized array elements
    }   

}