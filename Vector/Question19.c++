// 1008

// swap alternate value
#include<iostream>
#include<vector>
using namespace std;



class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        int size=arr.size();
        vector<int> temp(size, 0);
        for(int i=0; i<size;i++){
            temp[arr[i]]++;
        }
        for (int i = 1; i < size-2; i++) {
            for(int j=2;j<size-1;j++){
                if(temp[i]!=0){
                    if(temp[i]==temp[j]){
                        return false;
                    }
                }
                return true;
            }
        }
        return true;
    }
};

int main() {
    vector<int> nums = {-1,1,2,4,4,4,2};
    Solution sol;
    cout<<sol.uniqueOccurrences(nums);

    return 0;
}
