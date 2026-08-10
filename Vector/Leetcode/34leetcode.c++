#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;



class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        // vector <int> bs;
        int l=0;
        int h=nums.size()-1;
        int found =-1;
        int sfound=-1;
    
        while (l <=h) {

            int mid =(l + h)/2;
            if (target==nums[mid]){
                // bs.push_back(mid);
                found=mid;
                if(target==nums[mid-1] && mid-1<nums.size() && mid-1>=0){
                    // bs.push_back(mid-1);
                    sfound=mid-1;;
                }
                else if(target==nums[mid+1]  && mid+1<nums.size() && mid+1>=0){
                    // bs.push_back(mid+1);
                    sfound=mid+1;
                }
                break;
            }
            else if (target<nums[mid]){
                h=mid-1;
            }
            else{
                l=mid+1;
            }
    }
    // sort(bs.begin(),bs.end());
    // if(bs.empty()){
    //     bs.push_back(-1);
    //     bs.push_back(-1);
    // }
    return {sfound,found};

    }
};

int main() {
    vector<int> nums = {5,7,7,8,8,10};
    int target = 7;
    Solution sol;
    vector<int> bs = sol.searchRange(nums,target);
    for(int i = 0; i<bs.size();i++){
        cout<<bs[i]<<" ";
    }
    return 0;
}