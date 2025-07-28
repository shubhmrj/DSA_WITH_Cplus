#include<iostream>
using namespace std;

class Diagonal{
   int *A;
   int size;
   public :
        Diagonal(int sz){
            size=sz;
            A =new int[size];
        }
        Diagonal(){
            size =4;
            A= new int[size];
        }
        ~ Diagonal(){
            delete [] A;
        }

        void set(Diagonal mat, int i,int j, int x);
       
};
Array* Diagonal::set(Diagonal mat, int i,int j, int x){
    if(i>=j){
        mat->A[(i - 1)*i/2 + (j - 1)]=x;
    }
}

int get(struct Diagonal *mat, int i,int j){
    if(i=j){
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
    Diagonal mat1;
    A = new int[mat1.size * (mat.size + 1) / 2]; 
    
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