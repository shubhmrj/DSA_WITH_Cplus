#include<iostream>
#include<vector>
using namespace std;

int main(){
    int arr[10]={1,2,3,4,9};

    char ch[6]="abcde";

    cout<<arr<<endl;
    cout<<ch<<endl;

    char *ptr= ch;

    cout<<"print entire value of ch"<<ptr<<endl;
    cout<<"print first ch value "<< *ptr<<endl;
    cout<<"gives ascii value first value of ch  "<<*ptr+1<<endl;
    cout<<"gives ascii value first value of ch  "<<ptr+1<<endl;

    char *ptr1= ch;

    cout<<"print adress of ptr "<<&ptr1<<endl;
    cout<<"print first ch value"<< *ptr1<<endl;
    cout<<"gives ascii value first value of ch"<<*ptr1 +1<<endl;
}

// #include <iostream>
// using namespace std;
// int main()
// {
//   char arr[20];
//   int i;
//   for(i = 0; i < 10; i++) {
//     *(arr + i) = 69 + i;
//   }
//   *(arr + i) = '\0';
//   cout << arr;
//   return 0;
// }