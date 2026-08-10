#include<iostream>
#include<vector>
using namespace std;

class Solution {
    public:
        int singleNumber(vector<int>& nums){


    }
    void display();
    void insert(int index , int x);
};

void Solution::display()
{
    cout<<"Elements are :";
    for(int i=0;i<length;i++){
        cout<<A[i]<<" ";
    }
    cout<<endl;
}

void Solution::insert(int index, int x)
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