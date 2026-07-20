#include<iostream>
using namespace std;

int main(){

    for(int i = 5; i > 0; i--){
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