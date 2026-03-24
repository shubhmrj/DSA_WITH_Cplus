#include<iostream>

using namespace std;

int main(){
    int val;
    cin>> val;

    if(val<=1000){
       int per = val * 0.20;

       val = val - per;
      
       cout<<val;
    }

    else if(val>1000  || val <=5000){
       int per = val * 0.10;

       val = val - per;
      
       cout<<val;
    }

    else {
       float per = val * 0.15;

       val = val - per;
      
       cout<<val;
    }


}