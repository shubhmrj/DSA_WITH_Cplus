#include <iostream>
#include <vector>
using namespace std;


class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> result;
        int l=0;
        int h=nums.size()-1;
        while (l <=h) {

        int mid =(l + h)/2
        ;
        if (target==nums[mid]){
            result.push_back(mid); 
        }
        else if (target<nums[mid]){
            h=mid-1;
        }
        else{
            l=mid+1;
        }
        // cout<<"l: "<<l<<" h: "<<h<<" mid: "<<mid<<endl;
    }
    
    return result;

    }
};

int main() {
    vector<int> numbers = {1, 5, 8, 3, 10};
    int target = 5;

    Solution sol;
    vector<int> output = sol.searchRange(numbers, target);

    for (int val : output) {
        cout << val << " ";
    }
    return 0;
}
