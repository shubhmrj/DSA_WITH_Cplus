#include<iostream>
using namespace std;

// string adjacent(string s){
    
//     int i=0;
//     int j=s.length();
//     while(i<j && s.length()!=0){
//         if(s[i] == s[i+1]){
//             s.erase(i,2);
//             i--;
//         } 
//         else{
//             i++;
//         }
        
//     }
//     return s;
// }

string adjacent(string s){
    cout<<s.length();
    int i=0;
    int j=s.length();
    while(i<j && s.length()!=0){
        if(s[i] == s[i+1]){
            s.erase(i,2);
            i--;
        } 
        else{
            i++;
        }
        
    }
    return s;
}
int main(){
    string s ="azxxzy raaaj";
    
    cout<<adjacent(s);
}