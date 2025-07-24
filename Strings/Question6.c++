// finding duplicated characters

#include <iostream>
#include<cstring>
using namespace std;


void replacewithspace(char dup[]){


    for (int i = 0; dup[i] != '\0'; i++) {
        if (dup[i] == ' ') continue;  // skip already marked

        int count = 1;
        for (int j = i + 1; dup[j] != '\0'; j++) {
            if (dup[i] == dup[j]) {
                count++;
                dup[j] = ' ';  // mark as visited
            }
        }

        if (count > 1) {
            cout << dup[i] << " Duplicates: " << count << endl;
        }
    }
}

// void auxillaryarray(char dup[]){

//     char aux[50];
//     int j = strlen(dup)-1

//     for(int i = 0;)
// }

int main() {
    char dup[] = "aaabcccccccccccvvvvvvvvvvvvvvvvvvvvvvvyzzzz";
    int max =0;
    for (int i = 0; dup[i] != '\0'; i++) {
        if((int) dup[i]>max) max=dup[i];
    }
    cout<<max<<endl;
    int sz=max-96;
    char aux[sz]={0};

    for (int j=0; j<sz;j++) {
        cout<<(int)aux[j];
    }
    cout<<endl;
    for (int k = 0; dup[k] != '\0'; k++) {
        aux[dup[k]-97]++;
    }
    for (int l=0; l<sz;l++) {
        if(aux[l]>1) cout<<" "<<(char)(l+97)<<" "<<aux[l]<<endl;
    }

    return 0;
}

