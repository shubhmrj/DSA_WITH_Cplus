#include<iostream>
using namespace std;

struct Array{
    int *A; // Pointer to dynamically allocated array
    int size; // Maximum size of the array
    int length; // Current number of elements in the array
};

int display(struct Array arr) {
    cout << "Elements in the array: ";
    for (int i = 0; i < arr.length; i++) {
        cout << arr.A[i] << " "; // Display each element of the array
    }
    cout << endl;
    return 0; // Return 0 to indicate successful execution
}

void swap(int *x,int *y){
    int temp =*x;
    *x = *y; // Swap the values of x and y
    *y = temp; // Assign the value of temp to y

}

int linearSearch(struct Array *arr, int key) {
    for (int i = 0; i < arr->length; i++) {
        if (arr->A[i] == key) {
            
            // move the found element to the front of the array(move to head method)
            swap(&arr->A[i], &arr->A[0]); // Swap the found element with the first element
            
            // transpose
            // swap(&arr->A[i], &arr->A[i-1]); // Swap the found element with the first element
            
            cout << "Element found at index: " << i << endl; // Print the index if the element is found
            return i; // Return the index if the element is found
        }
    }
    return -1; // Return -1 if the element is not found
}

int main(){

    struct Array arr;
    arr.size = 10;
    arr.length = 7;
    arr.A = new int[arr.size];
    arr.A[0] = 15;
    arr.A[1] = 55;
    arr.A[2] = 10;
    arr.A[3] = 23;
    arr.A[4] = 34;
    arr.A[5] = 45;
    arr.A[6] = 56;

   
    // Perform linear search
    linearSearch(&arr, 45);
    display(arr); // Display the array elements
    // delete[] arr.A;
    return 0;
}