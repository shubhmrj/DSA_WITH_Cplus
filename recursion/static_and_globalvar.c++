#include<iostream>

using namespace std;

// int rec(int x){
//     if (x>0){
//         // cout<<"recursion : "<<x<<endl;
//        return rec(x-1)+x;
        
//     }
//     return 0;
// }

// int main(){
//     int n=5;
//     cout<<rec(n);
    

// }

// use of static variable


// global variable
// int a=0;
int rec(int x){
    // int a=0;         
    static int a=0;
    if (x>0){
        a++;
        // cout<<"recursion : "<<x<<endl;
       return rec(x-1)+a;
        
    }
    return 0;
}

int main(){
    int n;
    n=rec(5);
    cout<<n<<endl;

    n=rec(5);
    cout<<n;

}