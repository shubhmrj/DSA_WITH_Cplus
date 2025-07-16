#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int search(vector<int>& nums) {
        
        int l=0;
        int h=nums.size()-1;
        int sh=90;

        while (l <=h) {

            int mid =(l + h)/2;
                if (nums[l]<sh && nums[l]>nums[h]){
                    sh=nums[h];
                    h=mid-1;
                }
                else {
                    sh=nums[l];
                    l=mid+1;
                }
             cout<<"sh: "<<sh;
             cout<<endl;   
        }
    
        return -1;
    }
};

int main() {
    vector<int> nums = {4,5,6,7,0,1,2};

    Solution sol;

    sol.search(nums);

}