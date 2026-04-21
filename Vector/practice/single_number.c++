#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

class Solution{    
public:    
    int singleNumber(vector<int>& nums){

        unordered_map<int,int> res;

        for(int num : nums){
            res[num]++;
        }

        for( auto& i : res){
            if( i.second == 1){
                return i.first;
            }
        }
        return 0;
    }
};

int main(){
    vector<int> nums1 = {1, 2, 2, 4, 3, 1, 4};

    Solution sol;
    cout<<sol.singleNumber(nums1)<< "     ";

    // for (int val : nums1) {
    //     cout << val <<" ";
    // }
    return 0;

}