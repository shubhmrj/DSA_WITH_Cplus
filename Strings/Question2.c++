#include<iostream>
using namespace std;
int main(){
    char s[]="shubham";

    for(int i=0; s[i]!='\0';i++){
        s[i]=s[i]-32;
        cout<<s[i];
    }
}