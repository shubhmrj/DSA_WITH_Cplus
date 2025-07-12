// Find missing element from unsorted array;

#include<iostream>
#include<vector>
using namespace std;

class Array
{

    public:
        vector <int> A;
    
        Array() = default;  // default constructor

        Array(int sz) : A(sz) {}  // resize vector to size 'sz'

        void display()
        {
            cout<<"Elements are :";
            for(int val:A){
                cout<<val<<" ";
            }
            cout<<endl;
        }

        void insert(int index, int x)
        {
            if (index >= 0 && index <= A.size()) 
            { 
                A.insert(A.begin() + index, x); 
            }
                         
            else {
                cout << "Index out of bounds!" << endl; 
            }
        }

        // void missing(Array &arr2,int sz){
    
        //     int max= 0;

        //     for (int i = 0; i < length; i++) {
        
        //         if (A[i] > max) max = A[i];
        //     }

        //     for (int i = 0; i < sz; i++) {
        //         arr2.A[A[i]]++;
        //     }

        //     cout<<"Missing elements are:";
        //     for(int i=1; i<max;i++){
        //         if(arr2.A[i]==0){
        //             cout<<i<<" ";
        //         }
        //     }
        // }  



};




int main()
{
    int sz;
    cout << "Enter the size of the array: ";
    cin >> sz;

    Array arr1(sz);
    for (int i=0 ;i<sz;i++){
        cin>> arr1.A[i];
    }
    cout << "Array created successfully." << endl;
    arr1.display();

    int maxVal = 0;
    for (int val : arr1.A) {
        if (val > maxVal) {
            maxVal = val;
        }
    }
    
    Array arr2(maxVal);

    Array arr1(sz);
    for(int i=0 ;i<maxVal;i++){
        cin>> arr1.A[i];
    }
    cout << "Array created successfully." << endl;
    arr1.display();
}