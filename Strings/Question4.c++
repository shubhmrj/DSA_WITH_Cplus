// compairing strings only in same case if you want to compare sting so first change into same case

#include<iostream>
using namespace std;

int main(){
    char s[]="Shubhammmm";
    char a[] ="shubhami";
    int i,j;

    for( i= 0, j=0; s[i]!='\0'&& a[j]!='\0'; i++ , j++){
        if(s[i]!=a[j]){
            break;
        }
    }
    cout<<s[j]<<endl;
    if(a[j]==s[i]){
            cout<<"String is equal .";
        }
        else if (a[j]>s[i]){
            cout<<"String : "<< a <<" is greater. ";
        }
        else{
            cout<<"String : "<<s <<" is greater. ";

        }
}