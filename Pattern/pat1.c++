#include<iostream>
using namespace std;

int main(){

    for(int i = 1; i < 5; i++){
        int k = 4 - i;
        int j = i;
        while (k > 0) {
            cout << " ";
            k--;
        }
        while (j > 0) {
            cout << "*";
            j--;
        }

        j = i-1;
        while (j > 0) {
            cout << "*";
            j--;
        }

        cout << endl;
    }
    
}