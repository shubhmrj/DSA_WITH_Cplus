#include<iostream>
using namespace std;

int main(){

    for(int i = 1; i < 6; i++){
        for(int j = 0; j < i; j++){
            if(i % 2 != 0){
                if(j %2 != 0)
                    cout<<0;
                else
                    cout<<1;
            }
            else{
                if(j %2 == 0)
                    cout<<0;
                else
                    cout<<1;
            }
            
        }
        cout<<endl;
    }
}