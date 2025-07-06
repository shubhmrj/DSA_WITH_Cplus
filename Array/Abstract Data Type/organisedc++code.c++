#include<iostream>
using namespace std;


class Array 
{
private:
    // data members
    int *A;
    int size;
    int length;

public:
    // Non Parametrized Constructor to initialize the array with default size and length
    Array()
    {
        size = 10; // Default size
        length = 0; // Default length
        A = new int[size]; // Dynamic memory allocation for array
    }
    Array(int sz) 
    {
        size = sz; // Set size to the given value
        length = 0; // Initialize length to 0
        A = new int[size]; // Dynamic memory allocation for array
    }
    ~Array() 
    {
        delete[] A; // Free dynamically allocated memory
    }
    void display();
    Array* Merge(Array arr2);
    void deleteElement(int index);
    void insert(int index, int x);
    int linearSearch(int key);
    Array* arrayunion(Array arr2);
};

void Array::display() {
    cout << "Elements are: ";
    for (int i = 0; i < length; i++) {
        cout << A[i] << " ";
    }
    cout << endl;
}

Array* Array::Merge(Array arr2)
{
    int i,j,k;
    i = 0, j = 0, k = 0;
    Array *arr3 = new Array(length + arr2.length);

    while (i < length && j < arr2.length) {
        if (A[i] < arr2.A[j]) {
            arr3->A[k++] = A[i++];
        } else  {
            arr3->A[k++] = arr2.A[j++];
        }
    }
    for (; i < length; i++) {
        arr3->A[k++] = A[i];
    }
    for (; j < arr2.length; j++) {
        arr3->A[k++] = arr2.A[j];
    }
    arr3->length = k;
    return arr3;
}

void Array::insert(int index, int x){
    if (index >= 0 && index <= length) { // Check if the index is valid
        
        for(int i=length; i>=index; i--){
            A[i]=A[i-1]; // Shift elements to the right to make space for the new element
        }
        A[index]=x; // Insert the new element at the specified index
        length++; // Increment the length of the array

    }
}

void Array::deleteElement( int index){
    int x = 0;
    if (index<length){
        for(int i=index; i<length-1;i++){
            x=A[index];
            A[i]=A[i+1]; // Shift elements to the left to remove the element at the specified index
            length--; // Decrement the length of the array
        }
    }
}

void swap(int *x,int *y){
    int temp =*x;
    *x = *y; // Swap the values of x and y
    *y = temp; // Assign the value of temp to y

}

int Array::linearSearch( int key) {
    for (int i = 0; i < length; i++) {
        if (A[i] == key) {
            
            // move the found element to the front of the array(move to head method)
            swap(A[i], A[0]); // Swap the found element with the first element
            
            // transpose
            // swap(&arr->A[i], &arr->A[i-1]); // Swap the found element with the first element
            
            cout << "Element found at index: " << i << endl; // Print the index if the element is found
            return i; // Return the index if the element is found
        }
    }
    return -1; // Return -1 if the element is not found
}

Array* Array::arrayunion(Array arr2) {
    int i , j = 0, k = 0 ;

    int len= length;
    Array *arr3= new Array(length + arr2.length);
   
    for(i=0; i<length ;i++){
        arr3->A[k] = A[i];
        k++;  
        
    }

    for(int p=0; p < arr2.length ;p++){
        if (arr3->A[p] != arr2.A[j]){ 
            arr3->A[len++] = arr2.A[j]; 
            j++; 
            
        } else {
            j++; 
        }
    }
   
     arr3->length = len; 
    
}

int main(){
    Array *arr1;
    Array *arr2;
    
    int ch,sz;
    int x,index;

    cout << "Enter the size of the array: ";

    cin >> sz;
    arr1 = new Array(sz);
    arr2 = new Array(sz);
    cout << "Enter elements for the array:\n";
    for (int i = 0; i < sz; i++) {
        cin >> x;
        arr1->insert(i, x); // Insert elements into the array
    }
    cout << "Array created successfully.\n";
    arr1->display(); // Display the elements of the array

    cout << "Enter elements for the array:\n";
    for (int i = 0; i < sz; i++) {
        cin >> x;
        arr2->insert(i, x); // Insert elements into the array
    }
    cout << "Array created successfully.\n";
    arr2->display(); // Display the elements of the array



    // Array *arr3 = arr1->Merge( *arr2);

    // arr3->display(); // Display the merged array

    Array *arr3 = arr1->arrayunion(*arr2); // Perform union of the arrays
    cout << "Union of the arrays: ";

    arr3->display(); // Display the union of the arrays

    // do {
    //     cout << "\nMenu:\n";
    //     cout << "1. Insert an element\n";
    //     cout << "2. Display the array\n";
    //     cout << "3. Enter the element you want to search\n";
    //     cout << "4. Merge with another array\n";
    //     cout << "5. Exit\n";
    //     cout << "Enter your choice: ";
    //     cin >> ch;

    //     switch (ch) {
    //         case 1:
    //             cout << "Enter the element to insert: ";
    //             cin >> x;   
    //             cout << "Enter the index to insert at: ";
    //             cin >> index;
    //             arr1->insert(index, x);
    //             cout << "Element inserted successfully.\n";
    //             break;
    //         case 2:
    //             arr1->display();
    //             break;
    //         case 3: {
    //             // Create a temporary array arr2 for demonstration
    //             int sz2;
    //             cout << "Enter the size of the second array: ";
    //             cin >> sz2;
    //             Array arr2(sz2);
    //             cout << "Enter the element to insert: ";
    //             cin >> x;   
    //             cout << "Enter the index to insert at: ";
    //             cin >> index;
    //             arr2.insert(index, x);
    //             cout << "Element inserted successfully in arr2.\n";
    //             arr2.display();
    //             break;
    //         }
    //         case 4:{
    //             // Array arr2;
    //             // cout << "Enter the size of the second array: ";
    //             // cin >> sz;
    //             // arr2 = Array(sz);
    //             // cout << "Enter elements for the second array:\n";
    //             // for (int i = 0; i < sz; i++) {
    //             //     cin >> x;
    //             //     arr2.insert(i, x);
    //             // }
    //             Array arr2;
    //             Array *arr3 = arr1->Merge( arr2);
    //             cout << "Merged array: ";
    //             arr3->display();
    //             delete arr3; // Free dynamically allocated memory
    //             break;
    //         }
    //         case 5:
    //             cout << "Exiting...\n";
    //             break;
    //         default:
    //             cout << "Invalid choice! Please try again.\n";
    //     }
    // } while (ch != 4);

}