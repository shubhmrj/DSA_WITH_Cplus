#include<iostream>
using namespace std;


// direct add element in array at a specific index
// This code demonstrates how to directly add an element to an array at a specific index
// int main(){
//     int arr[7]={8,3,7,12,6,9,10}; // Initializing an array with 7 elements
//     int n = 7; // Number of elements in the array

//     for(int i=0; i<n; i++){
//         arr[4]=15;
//         cout<<arr[i]<<" "; // Display each element of the array
//     }
// }

struct Array{
    int *A; // Pointer to dynamically allocated array
    int size; // Maximum size of the array
    int length; // Current number of elements in the array
};



// This function appends an element to the end of the array if there is space
void append(struct Array *arr, int x){
    // Check if there is space in the array to add a new element
    if (arr->length < arr->size){
        arr->A[arr->length] = x; // Add the element x at the end of the array
        arr->length++; // Increment the length of the array

    }
    
}

// insert an element at a specific index in the array

void insert(struct Array *arr,int index, int y){
    if (arr->length<arr->size){
        
        for(int i=arr->length; i>=index; i--){
            arr->A[i]=arr->A[i-1]; // Shift elements to the right to make space for the new element
        }
        arr->A[index]=y; // Insert the new element at the specified index
        arr->length++; // Increment the length of the array

    }
}

int x=0;

void deleteElement(struct Array *arr , int index){
    if (index<arr->length){
        for(int i=index; i<arr->length-1;i++){
            x=arr->A[index];
            arr->A[i]=arr->A[i+1]; // Shift elements to the left to remove the element at the specified index
            arr->length--; // Decrement the length of the array
        }
    }
}

void display(struct Array arr){
    cout<<"Elements are";
    for (int i=0; i<arr.length; i++){
        cout<<arr.A[i]<<" "; // Display each element of the array
    }
}

int main(){

    struct Array arr;
    cout<<"Enter the size of array";
    cin>>arr.size; // Input the size of the array
    arr.A=new int [arr.size]; // Dynamically allocate memory for the array
    arr.length=0; // Initialize the length of the array to 0
    
    
    int n; // Variable to hold the number of elements to be input

    cout<<"Enter number of elemnets in array: ";
    cin>>n; // Input the number of elements in the array
    cout<<"Enter elements of array: ";
    for (int i=0; i<n; i++){
        cin>>arr.A[i]; // Input each element of the array
    }
    
    arr.length=n; // Set the length of the array to the number of elements input
    append(&arr, 6); // Call the append function to add an element to the end of the array
    insert(&arr, 2, 10); // Call the insert function to add an element at a specific index in the array
    deleteElement(&arr, 3); // Call the delete function to remove an element at a specific index in the array
    cout << "After appending and inserting elements: ";

   
    display(arr); // Call the display function to print the elements of the array
    delete[] arr.A; // Free the dynamically allocated memory
    return 0; // Return 0 to indicate successful execution
}