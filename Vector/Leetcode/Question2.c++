#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Array {
public:
    vector<int> A;

    Array() = default;  // default constructor

    Array(int sz) : A(sz) {}  // resize vector to size 'sz'

    void display() {
        cout << "Elements are: ";
        for (int val : A) {
            cout << val << " ";
        }
        cout << endl;
    }

    void insert(int index, int x) {
        int n = A.size();
        if (index >= 0 && index <= n) {
            A.insert(A.begin() + index, x);
        }   
        else {
                cout << "Index out of bounds!" << endl;
        }
    }


    void unsorted() {
        int n = A.size();
        for (int i = 0; i < n - 1; ++i) {
            for (int j = i + 1; j < n ; ++j) {
                if (A[i] + A[j] == 10) {
                    cout << A[i] << " + " << A[j] << " = 10" << endl;
                }
            }
        }
    }

    void missing(Array &arr2) {

        int maxVal = 0;

        for (int val : A) {
            if (val > maxVal) {
            maxVal = val;
            }
        }
        for (int val : A){
            arr2.A[val]++;
        }
        for (int i=1; i<=maxVal;i++) {
            if (i <= maxVal && arr2.A[i] == 0) {
                cout << i << " is missing " << endl;
            }
        }
    }
};



int main() {
    // int index;
    // int x;
    int sz;
    cout << "Enter the size of the array: ";
    cin >> sz;

    Array arr1(sz);

    cout << "Enter " << sz << " elements:\n";
    for (int i = 0; i < sz; ++i) {
        cin >> arr1.A[i];
    }

    cout << "Array created successfully.\n";
    arr1.display();

    int maxVal = *max_element(arr1.A.begin(), arr1.A.end());
    Array arr2(maxVal);

    // Fill arr2 with sample values [0, 1, 2, ..., maxVal - 1]
    for (int i = 0; i < maxVal; ++i) {
        arr2.A[i] = 0;

    }
    arr2.display();
    // cout<<"enter the index where you want to display: ";
    // cin>>index;
    // cout<<"Enter the Number : ";
    // cin>>x;
    // arr1.insert(index, x);
    // arr1.display();

    arr1.missing(arr2); // Uncomment to check missing elements from arr2
    arr2.display();
}
