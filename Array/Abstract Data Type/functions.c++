#include<iostream>
using namespace std;    


struct Array{
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

int max(struct Array arr ){
    int max = arr.A[0]; // Initialize max with the first element
    for(int i =1 ; i<arr.length; i++){
        if(arr.A[i]> max){
            max = arr.A[i]; // Update max if a larger element is found
        }
    }
    return max; // Return the maximum value found

}

int main() {
    struct Array arr;
    // cout << "Enter the size of the array: ";
    // cin >> arr.size;
    arr.size = 5; // Set a fixed size for the array
    arr.A = new int[arr.size]; // Dynamically allocate memory for the array
    arr.A[0] = 10; // Initialize the first element
    arr.A[1] = 20; // Initialize the second element
    arr.A[2] = 80; // Initialize the third element
    arr.A[3] = 110; // Initialize the fourth element
    arr.A[4] = 100; // Initialize the fifth element
    arr.length = 5; // Set the current number of elements in the array
    // int n;

    // cout << "Enter the number of elements in the array: ";
    // cin >> n;
    // cout << "Enter the elements of the array: ";
    // for (int i = 0; i < n; i++) {
    //     cin >> arr.A[i];
    // }

    // arr.length = n;

    max(arr); // Call the max function to find the maximum element
    cout << "Maximum element in the array: " << max(arr) << endl; // Display the maximum element

    display(arr); // Display the elements of the array

    delete[] arr.A; // Free dynamically allocated memory
    return 0;
}