#include<iostream>
using namespace std;

struct Array {
    int *A; // Pointer to dynamically allocated array
    int size; // Maximum size of the array
    int length; // Current number of elements in the array
};



void display(struct Array arr) {
    cout << "Elements are: ";
    for (int i = 0; i < arr.length; i++) {
        cout << arr.A[i] << " ";
    }
    cout << endl;
}

void insert(struct Array *arr, int key){
    // if (arr->length ==arr->size){
    //     cout << "Array is full, cannot insert element." << endl;
    //     return; // Exit if the array is full
    // }
    int i=arr->length-1; // Start from the last element
    if (arr->length == arr->size) {
        cout << "Array is full, cannot insert element." << endl;
        return; // Exit if the array is full
    }
    while (i >= 0 && arr->A[i]>key){
        arr->A[i+1] = arr->A[i]; // Shift elements to the right
        i--; // Decrease the length of the array
    }

    arr->A[i+1] = key; // Insert the new element at the correct position
    arr->length++; // Increase the length of the array

}

int main() {
    struct Array arr;
    cout << "Enter the size of the array: ";
    cin >> arr.size;
    arr.A = new int[arr.size]; // Dynamically allocate memory for the array
    arr.length = 0;

    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    cout << "Enter the elements of the array in sorted order: ";
    for (int i = 0; i < n; i++) {
        cin >> arr.A[i];
    }

    arr.length = n;

    insert(&arr, 50); // Insert a new element into the sorted array
    cout << "After insertion, the array is: ";
    display(arr); // Display the updated array

    delete[] arr.A; // Free dynamically allocated memory
    return 0;
}