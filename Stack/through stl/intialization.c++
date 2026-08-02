#include<iostream>
#include<stack>
using namespace std;


int main(){
    stack<int> s;

    s.push(2);
    s.push(4);
    s.push(5);

    for(int i = 0; i< 5; i++){
        s.push(i);
    }

    while(!s.empty()){
        cout<<s.top() << " ";
        s.pop();
    }
    return 0;
}
