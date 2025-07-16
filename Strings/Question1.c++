#include<iostream>
using namespace std;

int main(){
    string str[] ={"shubham","saj","shivam"};
    
    
    for(int i=0;i<3;i++){
        for(int j=0;j<str[i].length();j++){
            if(str[i][j]=str[i+1][j]);{
                cout<<"*";
            }
        }
        // cout<<str[i];
    }
    

}
