#include<iostream>
#include<vector>
using namespace std;

class Solution {
    public:
        void bubblesort(vector<int> &bubble){
            for(int i =0; i< bubble.size(); i++){
                int swapped = true;
                for(int j =0; j < bubble.size() -i -1; j++){
                    if(bubble[j] > bubble[j+1]){
                        swap(bubble[j], bubble[j+1]);
                        swapped = false;
                    }
                }
                if(swapped)
                    break;
            }
        }

};

int main(){
    vector<int>nums = {80, 11, 3,5,25,5,2,6};
    Solution sol;
    sol.bubblesort(nums);
    for(int i=0;i<nums.size();i++){
        cout << nums[i] << " ";
    } cout << endl;
    return 0;
}