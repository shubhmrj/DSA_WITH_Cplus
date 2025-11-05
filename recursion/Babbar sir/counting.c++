#include<iostream>
using namespace std;

void counting(long long n){
    if(n==0){
        return ;
    }

    counting(n-1);
    cout<<n<<" ";

}

int main(){
    counting(15);
}