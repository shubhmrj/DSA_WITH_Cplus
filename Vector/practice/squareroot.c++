#include<iostream>
#include<cmath>

using namespace std;

class Solution{
    public:
        long long int squareroot(int number){
            // return sqrt(number);

            int s = 1;
            int e = number/2;
            long long int ans = 0;
            while(s <= e ){

                long long int mid = s + (e - s)/2;
                ans = mid * mid;

                if(ans == number ){
                    return mid;
                }
                else if( ans < number){
                    ans = mid;
                    s = mid +1;
                }
                else{
                    e = mid - 1;
                }
            }
            return ans;

        }

};

int main(){
    Solution sol;
    cout<< sol.squareroot(4);
    cout << 0/5;
}
