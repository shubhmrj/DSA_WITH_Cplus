// Find missing element from unsorted array;

#include<iostream>
using namespace std;

class Array
{

    private:
        int *A;
        int size;
        int length;

    public:
        Array(){
            size=10;
            length=0;
            A=new int[size];
            
        }

        Array(int sz){
            size=sz;
            length=0;
            A=new int[size];
        }
        ~Array(){
            delete[] A;
        }
        void display();
        void insert(int index, int x);
        Array* missing(Array &arr2,int sz);
};

void Array::display()
{
    cout<<"Elements are :";
    for(int i=0;i<length;i++){
        cout<<A[i]<<" ";
    }
    cout<<endl;
}

void Array::insert(int index, int x)
{
    if (index >= 0 && index <= length) {
        for (int i = length; i > index; i--) {
            A[i] = A[i - 1]; 
        }
        A[index] = x;
        length++; 
    } else {
        cout << "Index out of bounds!" << endl; 
    }
}

Array* Array::missing(Array &arr2,int sz){
    int max= 0;

    for (int i = 0; i < length; i++) {
        if (A[i] > max) max = A[i];
    }

    for (int i = 0; i < sz; i++) {
        arr2.A[A[i]]++;
        }

    cout<<"Missing elements are:";
    for(int i=1; i<max;i++){
        if(arr2.A[i]==0){
        cout<<i<<" ";
        }
    }
    return 0;
}  



int main()
{
    Array *arr1; // Default constructor
    int sz ,x;
    int max=8;
    cout << "Enter the size of the array: ";
    cin >> sz;
    arr1 = new Array(sz); // Dynamic memory allocation for array

    for (int i=0 ;i<sz;i++){
        cin>> x;
        arr1->insert(i,x); 
    }
    cout << "Array created successfully." << endl;
    arr1->display();

    Array *arr2 ;
    arr2 = new Array(max); 

    for(int i = 0; i < max; i++) {
        arr2->insert(i,0);
    }


    arr2->display(); // Display the elements of the missing array 
    
    arr1->missing(*arr2 , sz); // Call the missing function to find the maximum value in the array

    cout<<endl;

    arr2->display(); // Display the elements of the missing array

    
    // arr1->missing(*arr2,sz);

}