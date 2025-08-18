#include<iostream>
#include<vector>
using namespace std;

long long int binarysearch(int x){
    int l=0;
    int h=x;
    long long int  ans = 0;
    
    while (l <= h) {
    long long int mid =l+(h-l)/2;
    
    long long int sq =  mid * mid;
    if (sq == x) return mid;
    else if (sq < x) {
        ans = mid;  // store last mid that was valid
        l = mid + 1;
    } else {
        h = mid - 1;
    }
    }
    return ans;
}

int main(){
    int x=630;
    cout<<binarysearch(x);
    
}