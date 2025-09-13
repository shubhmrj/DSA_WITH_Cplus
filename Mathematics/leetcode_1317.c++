#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    // helper function to check if a number has digit '0'
    bool hasZero(int num) {
        while (num > 0) {
            if (num % 10 == 0) return true;  // found zero
            num /= 10;
        }
        return false;
    }

    vector<int> getNoZeroIntegers(int n) {
        for (int i = 1; i < n; i++) {
            int sum = n - i;
            if (!hasZero(i) && !hasZero(sum)) {
                return {i, sum};
            }
        }
        return {}; // should never happen since problem guarantees a solution
    }
};

int main() {
    Solution sol;
    vector<int> res = sol.getNoZeroIntegers(15);
    for (int num : res) {
        cout << num << " ";
    }
}
