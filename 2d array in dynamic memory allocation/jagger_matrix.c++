#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int columns[] = {3, 2, 4}; 

    // Step 1: allocate array of pointers
    int** arr = new int*[n];

    // Step 2: allocate columns dynamically for each row
    for (int i = 0; i < n; i++) {
        arr[i] = new int[columns[i]];
    }

    // Step 3: fill array with values
    int val = 1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < columns[i]; j++) {
            arr[i][j] = val++;
        }
    }

    // Step 4: print jagged array
    cout << "\nJagged Array:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < columns[i]; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // Step 5: release memory
    for (int i = 0; i < n; i++) {
        delete[] arr[i];
    }
    delete[] arr;

    return 0;
}
