// find unique element 

// swap alternate value
#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    void searchRange(vector<int>& nums) {
        int l=0;
        int h=1;
        while (h<nums.size()) {
            if(nums[l]==nums[h]){
            l+=2; 
            h+=2;
            }
            else{
                cout<<nums[l]<<endl;
                l+=1;
                h+=1;
            }
        }
    }
};

class Solution1 {
public:
    int uniqueOccurrences(vector<int>& arr) {
        int ans =0;
        int size=arr.size();
        for(int i=0; i<size;i++){
            ans=ans^arr[i];
            if(ans&arr[i]){
                return ans;
                cout<<"hello";
            }
        }
        return false;
    }
};

int main() {
    vector<int> nums = {1,2};
    Solution1 sol;
    cout<<sol.uniqueOccurrences(nums);

   
    return 0;
}
