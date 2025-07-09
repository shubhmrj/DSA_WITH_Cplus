#include<iostream>
using namespace std;

class Array{

private :
    int *A; 
    int size; // 
    int length; 

public:Array() {
        size = 10; // Default size
        length = 0; // Default length
        A = new int[size]; // Dynamic memory allocation for array
    }
    
    Array(int sz) {
        size = sz; // Set size to the given value
        length = 0; // Initialize length to 0
        A = new int[size]; // Dynamic memory allocation for array
    }
    
    ~Array() {
        delete[] A; // Free dynamically allocated memory
    }
    void display();
    int Missing(int n); 
    void insert(int index, int x);
    int diffstartposition(int sz);
    int n_missing_value(int sz);
    
};

void Array ::display()
{
    cout<<"Elements are :";
    for(int i = 0; i < length; i++) {
        cout << A[i] << " ";
    }
    cout << endl;

}

//Function to find the missing one natural number in the array

int Array::Missing(int sz) {
    // int total = (sz + 1) * (sz + 2) / 2;
    int total = (A[sz-1]*(A[sz-1] + 1)) / 2; 
    for (int i = 0; i < sz; i++) {
        total -= A[i]; 
    }
    return total; 
}

// Function to to find the missing element  of natural number in the array where the starting elemnt is not start from 1.

int Array::diffstartposition(int sz){
    int diff= A[0] - 0;

    for (int i =0 ;i< sz ;i++){
        if (A[i] - i != diff) {
            return i+diff;
        }
    }
    
}

// finding multiple missing values in the array

int Array::n_missing_value(int sz){
    int diff =A[0] - 0; 

    for (int i = 0; i<sz ; i++){
        if (A[i]- i != diff) {
            
            while(diff< A[i] - i) {
                cout << "Missing element is: " << i + diff << endl;
                diff++;
            }
        }
    }
}

void Array::insert(int index ,int x){
    if(index>=0 && index<=length){
        for(int i =length ; i>=index ; i--){
            A[i]=A[i-1];
        }
        A[index] = x;
        length++;
    }
}



int main(){
    Array *arr1;
    int sz;
    int x , index;

    cout << "Enter the size of the array: ";
    cin >> sz;
    arr1 = new Array(sz);
    
    cout << "Enter elements for the array:\n";
    for (int i = 0; i < sz; i++) {
        cin >> x ;
        arr1->insert(i, x); 
    }
    cout << "Array created successfully.\n";

    arr1->display(); 

    cout<<arr1->Missing(sz);

    
    return 0;

}