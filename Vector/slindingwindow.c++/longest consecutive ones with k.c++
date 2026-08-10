#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


class Solution{

    public:

        int maxzero(vector<int> &nums, int k){

            int maxi  = 0;
            int j = 0;
            int n  = 0;



            for(int i = 0; i< nums.size(); i++){

                if(nums[i] == 0){
                    n++;
                }

                if(n > k){
                    if(nums[i] == 0) n--;
                    j++;
                }

                maxi = max(maxi, i - j+1);

            }
            return maxi;
        }
};

int main(){
    vector<int> nums = {0,0,0,1};

    Solution sol;

    cout<<sol.maxzero(nums,3);
}