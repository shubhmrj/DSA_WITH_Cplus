#include<iostream>
#include<math.h>
using namespace std;

int main() {
    int n;
    cout << "Enter the digit to convert into binary: ";
    cin >> n;

    int res = 0;
    int i =0;
    // if (n == 0) res = "0";
    while (n != 0) {
        string binary = to_string(n % 10);
        if(binary == "1"){
            res = res + pow(2, i);
        }
        n = n / 10;
            i++;
    }

    cout << res;
}

// int main(){
//     int n;
//     cout << "Enter the digit to convert into binary: ";
//     cin >> n;
//     int res= 0;
//     int i =0;
//     while(n!=0){
//         int bit = n%10;
//         if(bit==1){
//             res= pow(2,i) + res;
//         }
//         n= n/10;
//         i++;
//     }
//     cout<<res<<endl;
// }