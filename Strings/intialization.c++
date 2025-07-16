#include <iostream>
using namespace std;

int main() {
    // const char *s = "welcome";
    char s[]="shubham";
    int i;

    for (i=0; s[i] != '\0';i++) {
        s[i]=s[i]-32;
        cout<<s[i];
    }

    cout << "\nlength : " << i;
    return 0;
}
