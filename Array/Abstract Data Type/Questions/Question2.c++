// // This code merges two sorted arrays into a third array and displays the merged result.
// // The arrays are represented using a struct that contains a pointer to the array, its size, and its current length.


#include<iostream>
using namespace std;

struct Array {
    int *A; // Pointer to dynamically allocated array
    int size; // Maximum size of the array
    int length; // Current number of elements in the array
};      

void display(struct Array arr3) {
    cout << "Elements are: ";
    for (int i = 0; i < arr3.length; i++) {
        cout << arr3.A[i] << " ";
    }
    cout << endl;
}

void merge(struct Array *arr1 ,struct Array *arr2, struct Array *arr3) {

    int i = 0, j = 0, k = 0;
    // int size = arr1->length + arr2->length; // Calculate the total size for the merged array
    // struct Array *arr3 = new Array; // Dynamically allocate memory for the Array struct
    // arr3->size = size;
    // arr3->A = new int[size]; // Dynamically allocate memory for the merged array elements

    while(i < arr1->length && j < arr2->length) {
        if (arr1->A[i] < arr2->A[j]) {
            arr3->A[k++] = arr1->A[i++]; // Add element from arr1
        } else {
            arr3->A[k++] = arr2->A[j++]; // Add element from arr2
        }
    }
    for(; i < arr1->length; i++) {
        arr3->A[k++] = arr1->A[i]; // Add remaining elements from arr1
    }
    for(; j < arr2->length; j++) {
        arr3->A[k++] = arr2->A[j]; // Add remaining elements from arr2
    }
    cout << "Merged array is: ";
    arr3->length = k; // Set the length of the merged array     
    // display(*arr3); // Display the merged array

}

int main() {
    struct Array arr1;
    // cout << "Enter the size of the array: ";
    // cin >> arr.size;
    arr1.A = new int[5]; // Dynamically allocate memory for the array
    arr1.A[0] = 10; // Initialize the first element
    arr1.A[1] = 20; // Initialize the second element 
    arr1.A[2] = 30; // Initialize the third element
    arr1.A[3] = 40; // Initialize the fourth element
    arr1.A[4] = 50; // Initialize the fifth element
    arr1.size = 60; // Set the maximum size of the array
    
    arr1.length = 5; // Set the current number of elements in the array

    struct Array arr2;
    arr2.A=new int[5]; 
    arr2.A[0] = 15; 
    arr2.A[1] = 25;     
    arr2.A[2] = 35; 
    arr2.A[3] = 45; 
    arr2.A[4] = 55; 
    arr2.size = 65; 
    
    arr2.length = 5; 

    struct Array arr3;
    arr3.size = arr1.length + arr2.length; 
    arr3.length = 0; 
    arr3.A = new int[arr3.size]; 
    merge(&arr1, &arr2, &arr3); 
    cout << "The array is: ";
    display(arr3); 
    delete[] arr1.A; 
    delete[] arr2.A;
    delete[] arr3.A;
    
    return 0;
}