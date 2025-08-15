#include<iostream>
#include<vector>
using namespace std;

int binarysearch(int x){
    int l=0;
    int h=x;
    int ans = 0;
    
    while (l <= h) {
    int mid =l+(h-l)/2;
    long long sq = 1LL * mid * mid;
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
    int x=8;
    cout<<binarysearch(x);
    
}