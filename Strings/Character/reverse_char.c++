#include<iostream>
using namespace std;

int reverse(char name[]){
    int count =0;
    for(int i=0; name[i]!='\0'; i++){
        count++;
    }
    int i=0;
    int j=count-1;
    while(i<j){
        swap(name[i],name[j]);
        i++;
        j--;
    }
    cout<<name;
}

int main(){
    char name[10];
    cout<< "Enter your name : ";
    cin>>name;
    cout<< "your name is : "<<name<<endl;
    cout<<"reverse name is: ";
    reverse(name);
}