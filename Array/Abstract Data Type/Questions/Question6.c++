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

// Array* Array::unsorted(int sz){
//     int repeated=0;
//     for(int i = 0; i < sz+1 ; i++){

//         if( A[i]==A[i+1] && A[i]!=repeated){
//             cout<<A[i]<<" ";
//             repeated=A[i];

//         }
        
//     }
// }  

void Array::unsorted(int sz){
    int j=0;
    for(int i = 0; i < sz ; i++){

        if( A[i]==A[i+1]){
            j=i+1;
            while(A[j]==A[i]){
                j++;
        
            }
            cout<<A[i]<<" "<<"repeated times: "<<j-i;
                cout<<endl;
                i=j-1;
        
    }
        
    }
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

    
    
    arr1->unsorted(sz); 

}
