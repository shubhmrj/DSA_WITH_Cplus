#include <iostream>
using namespace std;
int main()
{
  float arr[5] = {12.5, 10.0, 13.5, 90.5, 0.5};
  float *ptr1 = &arr[0];
  float *ptr2 = ptr1 + 3;
  cout<<*ptr2<<" ";
  cout<< ptr2 - ptr1<<' ';
  cout<< *ptr2 - *ptr1<<' ';
  cout<<ptr2;
  return 0;
}
/*
Solution description
1. float *ptr1 = &arr[0]; sets ptr1 to point to the first element of the array (12.5).
2. float *ptr2 = ptr1 + 3; sets ptr2 to point to the fourth element of the array (90.5).
3. cout<<*ptr2<<" "; prints the value pointed by ptr2, which is 90.5.
4. cout<< ptr2 - ptr1; calculates the difference between the two pointers, 
which is 3 (since ptr2 points to the fourth element and ptr1 points to the first element).
*/