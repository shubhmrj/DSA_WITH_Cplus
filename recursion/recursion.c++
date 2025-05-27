#include<iostream>

using namespace std;

int rec(int x){
    if (x>0){
        // cout<<"recursion : "<<x<<endl;
        rec(x-1);
        cout<<"recursion : "<<x<<endl;


    }
}

int main(){
    int n=3;
    rec(n);
    return 0;

}