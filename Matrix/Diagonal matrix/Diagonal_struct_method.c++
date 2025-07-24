#include<iostream>
using namespace std;

struct Diagonal{
   int *A;
   int size;

};
void set(struct Diagonal *mat, int i,int j, int x){
    if(i==j){
        mat->A[i-1]=x;
    }
}

int get(struct Diagonal *mat, int i,int j){
    if(i==j){
        return mat->A[i-1];
    }
    else{
        return 0;
    }
}
void Display(struct Diagonal *mat){
    int i,j;
    for(i=0;i<mat->size;i++){
        for(j=0;j<mat->size;j++){
            if (i==j){
                cout<<mat->A[i-1]<<" " ;
            }
            else {
                cout<<0<<" ";
            }
        }
        cout<<endl;
    }
}

int main(){
    struct Diagonal mat;
    mat.size=4;
    mat.A = new int[mat.size];
    set(&mat,0,0,5);
    set(&mat,1,1,5);
    set(&mat,2,2,15);
    set(&mat,3,3,25);
    // set(&mat,4,4,35);
    Display(&mat);
    delete[] mat.A;
}