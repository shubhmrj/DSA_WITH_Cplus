#include<iostream>
#include<vector>
using namespace std;

class Diagonal {
public:
    void set(vector<int>& mat, int i, int j, int x) {
        int n = 4;
        if (i - j == 1) {
            mat[i - 2] = x;                     // lower diagonal
        }
        else if (i - j == 0) {
            mat[n + i - 2] = x;                 // main diagonal
        }
        else if (i - j == -1) {
            mat[2 * n + i - 2] = x;             // upper diagonal
        }
    }

    void Display(vector<int>& mat) {
        int n = 4;
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                if (i - j == 1) {
                    cout << mat[i - 2] << " ";
                }
                else if (i - j == 0) {
                    cout << mat[n + i - 2] << " ";
                }
                else if (i - j == -1) {
                    cout << mat[2 * n + i - 2] << " ";
                }
                else {
                    cout << "0 ";
                }
            }
            cout << endl;
        }
    }
};

int main() {
    int size = 4;
    Diagonal sol;
    vector<int> mat(3 * size - 2);

    int x;
    for (int i = 1; i <= size; i++) {
        for (int j = 1; j <= size; j++) {
            cin >> x;
            sol.set(mat, i, j, x);
        }
    }

    sol.Display(mat);
    return 0;
}
