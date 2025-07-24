#include<iostream>
using namespace std;

struct Diagonal{
   int *A;
   int size;

};
void set(struct Diagonal *mat, int i,int j, int x){
    if(i>=j){
        mat->A[(i - 1)*i/2 + (j - 1)]=x;
    }
}

int get(struct Diagonal *mat, int i,int j){
    if(i>=j){
        return mat->A[(i - 1)*i/2 + (j - 1)];
    }
    else{
        return 0;
    }
}
void Display(struct Diagonal mat){
    int i,j;
    for(i=1;i<=mat.size;i++){
        for(j=1;j<=mat.size;j++){
            if (i>=j){
                cout<<mat.A[(i - 1)*i/2 + (j - 1)]<<" " ;
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