// Using Simple Method
#include<iostream>
using namespace std;

void set(int A[], int i,int j, int x){
    if(i>=j){
        A[((i*(i-1))/2)*(j-1)]=x;
    }
}

int get(int A[4], int i,int j){
    if(i>=j){
        return A[i-1];
    }
    else{
        return 0;
    }
}
void Display(int A[4]){
    int i,j;
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            if (i>=j){
                cout<<A[((i*(i-1))/2)*(j-1)]<<" " ;
            }
            else {
                cout<<0<<" ";
            }
        }
        cout<<endl;
    }
}

int main(){
    int A[4];
    set(A,0,0,5);
    set(A,1,0,15);
    set(A,1,1,25);
    set(A,2,0,35);
    set(A,2,1,45);
    set(A,2,2,55);
    set(A,3,0,65);
    set(A,3,1,75);
    set(A,3,2,85);
    set(A,3,3,95);
    Display(A);
}