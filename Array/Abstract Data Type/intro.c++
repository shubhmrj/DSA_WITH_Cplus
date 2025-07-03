#include<iostream>
using namespace std;

struct Array{
    int *A;
    int size;
    int length;
	
};

void display(struct Array arr){
    cout<<"Elements are: ";
    for(int i=0; i<arr.length; i++){
        cout<<arr.A[i]<<" "; // Display each element of the array
    }
    cout<<endl;
}

int main(){
    struct Array arr;
    cout<<"Enter size of array: ";
    cin>>arr.size; // Input the size of the array
    arr.A = new int[arr.size];
    arr.length=0 ; // Dynamically allocate memory for the array
    int n; // Variable to hold the number of elements to be input
    cout<<"Enter number of elements in array:";
    cin>>n; // Input the number of elements in the array
    cout<<"Enter elements of array: ";

    for(int i=0; i<n; i++){
        cin>>arr.A[i]; // Input each element of the array
    }
    arr.length =n; // Set the length of the array to the number of elements inpu
    display(arr); // Call the display function to print the elements of the array
    delete[] arr.A; // Free the dynamically allocated memory
}