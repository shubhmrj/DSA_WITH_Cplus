#include<iostream>
using namespace std;

struct Diagonal{
   int *A;
   int size;

};
void set(struct Diagonal *mat, int i,int j, int x){
    if(i>=j){
        int n=mat->size;
        mat->A[n*(j-1)-(j-2)*(j-1)/2+(i-j)]=x;
    }
}

int get(struct Diagonal *mat, int i,int j){
        int n=mat->size;
    if(i<=j){
        return mat->A[n*(j-1)-(j-2)*(j-1)/2+(i-j)];
    }
    else{
        return 0;
    }
}
void Display(struct Diagonal mat){
    int i,j;
    int n=mat.size;
    for(i=1;i<=mat.size;i++){
        for(j=1;j<=mat.size;j++){
            if (i>=j){
                cout<<mat.A[n*(j-1)-(j-2)*(j-1)/2+(i-j)]<<" " ;
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
    mat.A = new int[mat.size * (mat.size + 1) / 2]; 
    
    int i,j,x;
    for(i=1;i<=mat.size;i++){
        for(j=1;j<=mat.size;j++){
            cin>>x;
            set(&mat,i,j,x);
        }
    }
    Display(mat);
    delete[] mat.A;
}