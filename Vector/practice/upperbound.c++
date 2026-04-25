#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;

class Solution{
public:
    int lowerBound(vector<int> &nums, int x){
        
        int i =0;
        int j = nums.size()-1;

        while(i <= j){
            int mid = i + (j - i) / 2;

            
            if(nums[mid] <= x ){
                i = mid+1;
            }
            else{
                j = mid-1;
            }
        }
        return i;
    }
};

int main(){
    vector<int> nums ={1,2,2,3};

    Solution sol;
    cout<<sol.lowerBound(nums,2);

}