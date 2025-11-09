#include<iostream>
#include<unordered_map>
#include<vector>
#include<algorithm>
#include<cctype>
using namespace std;

vector<string> saydigit(long long n){
    string arr[11]={"zero","one","two","three","four","five","six","seven","eight","nine","ten"};
    vector<string> s;

    while(n>0){
        int num = n % 10;
        s.push_back(arr[num] + " ");
        n=n/10;
    }
    reverse(s.begin(),s.end());
    return s;

}

int main(){
    vector<string> s = saydigit(456012356);
    for (auto &a : s) cout << a;
    return 0;
}
