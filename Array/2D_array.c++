#include<iostream>
using namespace std;

int main(){
    int arr[3][4]={{1, 2, 3, 4},
                   {5, 6, 7, 8},
                   {9, 10, 11, 12}}; // Initializing a 2D array with values
    
    cout << "2D Array elements:" << endl;
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            cout << arr[i][j] << " "; // Printing each element of the 2D array
        }
        cout << endl; // New line after each row
    }
}