#include<iostream>
using namespace std;

string toBinary(int n) {
    string result = "";
    unsigned int mask = 1 << 31; // For 32-bit representation
    for (int i = 0; i < 32; i++) {
        result += (n & mask) ? '1' : '0';
        mask >>= 1;
    }
    return result;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << "Binary (32-bit): " << toBinary(n) << endl;
}
