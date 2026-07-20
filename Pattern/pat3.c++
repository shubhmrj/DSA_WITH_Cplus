#include<iostream>
using namespace std;

int main(){

    for(int i = 1; i < 6; i++){
        for(int j = 0; j < i; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i = 1; i < 6; i++){
        for(int j = i; j < 6; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}