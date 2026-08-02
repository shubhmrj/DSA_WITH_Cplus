#include<iostream>

using namespace std;

class Solution{
    public:

        bool num(int n ){
            int j = 0;
            int k = n;

            while(n > 0){
                j = j * 10 + n % 10;

                n = n / 10;
            }
            cout<< j << endl;

            return k == j;
        }
        
};

int main(){
    int n = 056650;

    Solution sol;

    cout<<    sol.num(n) << endl;

}