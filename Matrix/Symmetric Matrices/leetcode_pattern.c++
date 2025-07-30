#include<iostream>
#include<vector>
using namespace std;

class Diagonal{
    public:
        void set(vector<int>& mat, int i,int j, int x){
            int n = 4;
            if(i<=j){
                mat[n*(i-1)-(i-2)*(i-1)/2+(j-i)]=x;
            }
        }

        int get(vector<int>& mat, int i,int j){
            int n = 4;
            if(i<=j){
                return mat[n*(i-1)-(i-2)*(i-1)/2+(j-i)];
            }
            else{
                return 0;
            }
        }

        void Display(vector<int>& mat){
            int i,j;
            int n = 4;
            for(i=1;i<=4;i++){
                for(j=1;j<=4;j++){
                    if (i<=j){
                        cout<<mat[n*(i-1)-(i-2)*(i-1)/2+(j-i)]<<" " ;
                    }
                    else {
                        cout<<mat[n*(i-1)-(i-2)*(i-1)/2+(j-i)]<<" ";
                    }
                }
            cout<<endl;
        }
    }

};

int main(){
    int size=4;
    int n = size;
    Diagonal sol;
    // necessary point
    vector<int> mat(n * (n + 1) / 2);

    int i,j,x;
    for(i=1;i<=size;i++){
        for(j=1;j<=size;j++){
            cin>>x;
            sol.set(mat,i,j,x);
        }
    }
    sol.Display(mat);
}