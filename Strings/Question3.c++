#include<iostream>
#include<cstring>
using namespace std;

void swap(char *x,char *y){
    char temp=*x;
    *x=*y;
    *y=temp;
}

// Second method to reverse a string by taking auxillary array
void reverse (char str[]){
    int j=strlen(str);
    char reversed[50];
    int k=0;
    for(int i=j-1;i>=0;i--){
        reversed[k++]=str[i];
    }
    reversed[k]='\0';
    cout<<reversed;
    
}

void pointer_reverse(char *str){
    int i=0;
    int j=strlen(str)-1;
    while(i<j){
        // swap(str[i],str[j]);  //this line will swap the characters  but it will by value not by reference , it copy of the array
        swap(&str[i],&str[j]);   //this line will swap the characters by reference , means changing value in original array
        i++;j--;
    }
    cout<<str<<endl;
}
int main(){
    char str[]="shubham";
    pointer_reverse(str);
    cout<<"Due to pass by reference the original string is also reversed , so you can see the original string : ";
    reverse(str);

}


