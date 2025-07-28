// palindrome 

#include<iostream>
#include<cstring>
using namespace std;

void swap(char *x, char *y) {
    char temp = *x;
    *x = *y;
    *y = temp;
}
 
int main(){
    char str[]="AMA";

    int l=strlen(str);
    char reversed[50];
    int k=0;
    for(int i=l-1;i>=0;i--){
        reversed[k++]=str[i];
    }
    reversed[k]='\0';
    cout<<reversed;

    int i,j;
     for( i= 0, j=0; str[i]!='\0'&& str[j]!='\0'; i++ , j++){
        if(str[i]!=reversed[j]){
            break;
        }
    }
    cout<<reversed[j]<<endl;
    if(reversed[j]==str[i]){
            cout<<"String is equal .";
        }
        else if (reversed[j]>str[i]){
            cout<<"String : "<< reversed <<" is greater. ";
        }
        else{
            cout<<"String : "<<str <<" is greater. ";

        }
}