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

int swap(int *x ,int *y){
    int *temp;
    temp==x;
    x = y;
    y = temp;
}

// int reverse(struct Array &arr) {
//     int start = 0;
//     int end = arr.length - 1;
//     while (start < end) {
//         // Swap elements at start and end
//         int temp = arr.A[start];
//         arr.A[start] = arr.A[end];
//         arr.A[end] = temp;
//         start++;
//         end--;
//     }
//     return 0; // Return 0 to indicate success
// }


void reverse(struct Array *arr){
    
    for(int i = 0, j = arr->length - 1; i < j; i++, j--){
        // Swap elements at i and j
        // int temp = arr->A[i];
        // arr->A[i] = arr->A[j];
        // arr->A[j] = temp;
        swap(arr->A[i], arr->A[j]); // Call to swap function
    }
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
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr.A[i];
    }

    arr.length = n;

    display(arr); // Display the elements of the array

    cout << "Reversed ";
    reverse(&arr); // Reverse the array
    display(arr); // Display the reversed array
    delete[] arr.A; // Free dynamically allocated memory
    return 0;
}