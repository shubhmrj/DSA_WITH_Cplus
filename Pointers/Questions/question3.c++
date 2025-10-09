#include <iostream>
using namespace std;
int main ()
{
  int numbers[5];
  int * p;
  p = numbers; 
  *p = 10;
  p = &numbers[2]; 
  *p = 20;
  p--; 
  *p = 30;
  p = numbers + 3;
  *p = 40;
  p = numbers;
  *(p+4) = 50;
  for (int n=0; n<5; n++) {
     cout << numbers[n] << ",";
  }
  return 0;
}

/*
Solution description
1. p is assigned to the address of the first element of the array, and *p = 10 sets the first element to 10.
2. p is assigned to the address of the third element, and *p = 20 sets the third element to 20.
3. p is decremented, pointing to the second element, and *p = 30 sets the second element to 30.
4. p is assigned to the address of the fourth element, and *p = 40 sets the fourth element to 40.
5. p is assigned to the address of the first element, and *(p+4) = 50 sets the fifth element to 50.
So, the output is "10 30 20 40 50".
*/