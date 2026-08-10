#include<iostream>
#include<vector>
using namespace std;


int main(){
    // vector<int> vec;
    // vector<int> vec ={1,2,3};
    // this intialize each value 0
    vector<int> vec(3,0);

    for(int i: vec){
        cout<<i<<endl;
    }
    cout<<vec[2];
    return 0;
}