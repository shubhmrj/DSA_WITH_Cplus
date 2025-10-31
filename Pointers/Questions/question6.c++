#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<string> words = {"cat","bt","hat","tree"};

    for (string w : words) {
        cout << w << " -> size: " << w.size() << endl;

        cout << "Characters: ";
        for (char c : w) {
            cout << c << " ";
        }
        cout << "\n\n";
    }

    return 0;
}
