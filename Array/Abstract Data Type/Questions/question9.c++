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
        A = new int[size];
    }

    Array(int sz){
        size=sz;
        length=0;
        A = new int[sz];
    }
    void display();
    void insert(int index,int x);
    void unsorted(int sz);
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

        if(arr2.A[10-A[i]]!=0){
            cout<<"true";
        }

        arr2.A[A[i]]++;
        }
        

    return 0;
}

// find the repeated number and how many times in unsorted array

void Array::unsorted(int sz){
    for(int i = 0; i < sz-1 ; i++){

            for(int j= i+1; j < sz; j++){

                if( A[i] + A[j]==10){

                    cout<<A[i] <<" + "<<A[j]<<" 10" ;
                    cout<<endl;
                } 
            }
    }
}   



int main()
{
    Array *arr1; // Default constructor
    int sz ,x;
    int max=0;
    cout << "Enter the size of the array: ";
    cin >> sz;
    arr1 = new Array(sz); // Dynamic memory allocation for array

    for (int i=0 ;i<sz;i++){
        cin>> x;
        arr1->insert(i,x);
        if (x > max){ 
        max = x;
        } 
    }
    cout << "Array created successfully." << endl;
    arr1->display();

    Array *arr2 ;
    arr2 = new Array(max); 

    for(int i = 0; i < max; i++) {
        arr2->insert(i,0);
    }

    
    
    arr1->unsorted(sz); 

}
