#include<iostream>
#include<vector>
using namespace std;

class Diagonal{
    public:
        void set(vector<int>& mat, int i,int j, int x){
            if(i<=j){
                mat[(j * (j - 1)) / 2 + (i - 1)]=x;
            }
        }

        int get(vector<int>& mat, int i,int j){
            if(i<=j){
                return mat[(j * (j - 1)) / 2 + (i - 1)];
            }
            else{
                return 0;
            }
        }

        void Display(vector<int>& mat){
            int i,j;
            for(i=1;i<=4;i++){
                for(j=1;j<=4;j++){
                    if (i<=j){
                        cout<<mat[(j * (j - 1)) / 2 + (i - 1)]<<" " ;
                    }
                    else {
                        cout<<0<<" ";
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