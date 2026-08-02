#include<iostream>
#include<vector>

using namespace std;

class Stack{
    public:
        int size;
        int *arr;
        int top;

    Stack(int size){
        this -> size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int element){
        if(top < size){
            top++;

            arr[top] = element;
        }
        else{
            cout<<" stack overflow : ";
        }
    }

    void pop(){
        if(top >=0){
            top--;
        }
        else{
            cout<< " stack underflow";
        }
    }

    int peak(){
        if(top >=0 ){
            return arr[top];
        }
        else{
            cout<< "stack underflow";
            return -1;
        }
    }

    bool empty(){
        if(top == -1){
            return true;
        }
        else{
            return false;
        }

    }


};



int main(){
    Stack s(10);

    s.push(2);
    s.push(4);
    s.push(5);

    for(int i = 0; i< 5; i++){
        s.push(i);
    }

    while(!s.empty()){
        cout<<s.peak() << " ";
        s.pop();
    }
    return 0;
}