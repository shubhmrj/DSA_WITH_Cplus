#include<iostream>
using namespace std;
int main() {
  char st[] = "ABCD";
  for(int i = 0; st[i] != '\0'; i++) {
     cout << st[i] << *(st)+i << *(i+st) << i[st];
  }
  return 0;
}

/*
Solution description
st[i] is equivalent to *(st+i) and i[st], so all three will print the same thing that is the ith character of the given string.
*(st)+i: prints the ASCII value of the first character ('A') plus the index i as when character and integer are added, implicit typecasting to integer is done.
So, the output is "A65AAB66BBC67CCD68DD".
*/