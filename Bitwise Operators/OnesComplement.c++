#include<iostream>
using namespace std;

int main (){
    int n;
    cout<<"Enter the bit you want to convert: ";
    cin>>n;
    string res ="";
    if (n == 0) res = "0";
    while(n!=0){
        string bit = to_string(n%10);
        if(bit=="0"){
            res= res+"1";
        }
        else{
            res = res + "0";
        }
        n=n/10;
    }
    cout<<res;
}

// leetcode 1009

class Solution {
public:
    int bitwiseComplement(int n) {
        int m =n;
        int mask = 0;
        if (n==0){
            return 1;
        }
        while(m!=0){
            mask = (mask << 1) | 1;
            m= m>>1;
        }
        int res = (~n) & mask;
        return res;
    }
};