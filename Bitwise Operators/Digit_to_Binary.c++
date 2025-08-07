#include<iostream>
#include<math.h>
using namespace std;


// This method doesnot give corrct answer
// int main(){
//     int n;
//     cout<<"Enter the digit to convert into binary: ";
//     cin>>n;
//     int ans=0;
//     int i =0;
//     while(n!=0){
//         int bit = n & 1;
//         ans = (bit * pow(10,i)) + ans;
//         n = n>>1;
//         i++;
//     }
//     cout<< ans;
// }

#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the digit to convert into binary: ";
    cin >> n;

    string binary = "";
    if (n == 0) binary = "0";
    while (n > 0) {
        binary = to_string(n & 1) + binary;
        n = n >> 1;
    }

    cout << binary;
}
