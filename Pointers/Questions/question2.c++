#include <iostream>
using namespace std;
int main()
{
  int arr[] = {4, 5, 8, 7};
  int *p = arr + 1;
  cout << *p+1<<endl;
  cout<<p;
  return 0;
}