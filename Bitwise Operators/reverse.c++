#include<iostream>
using namespace std;

int main (){
    class Solution {
public:
    int reverseBits(int n) {
        int result = 0;
        for (int i = 0; i < 32; i++) {
            result = (result << 1);  // Add last bit of n to result
            result= result | (n & 1);
            n >>= 1;                           // Move to next bit
        }
        return result;
    }
};

}