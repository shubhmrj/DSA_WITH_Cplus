#include<iostream>
using namespace std;


/*
✅ i & 1:
This is a bitwise AND operation used to check if a number is odd.

If i is odd, i & 1 == 1

If i is even, i & 1 == 0

✅ continue:
Skips the remaining statements in the loop and jumps to the next iteration of the loop.
*/
int main() {
    for (int i = 0; i <= 15; i += 2) {
        cout << i << " ";

        if (i & 1) {
            continue;
        }

        i++;
    }
}
