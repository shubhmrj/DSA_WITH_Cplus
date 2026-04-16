#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


class Solution {
public:

    int quicksorts(vector<int> &nums,int s, int e){

        int pivot = nums[s];

        int count = 0;

        for(int i = s; i <= e; i++){
            if(pivot > nums[i] ){
                count++;
            }
        }
        int pivotindex = count+ s;
        swap(nums[s], nums[pivotindex]);

        int i = s;
        int j = e;
        while(i < pivotindex && j > pivotindex ){

            while(nums[i] < pivot ) i++;
            while(nums[j] > pivot ) j--;

            if(nums[i] > pivot && nums[j] < pivot){
                swap(nums[i], nums[j]);
                i++;
                j--;
            }

        }
        return pivotindex;

    }

    void quicksort(vector<int> &nums, int s, int e ) {
        
        if(s >= e)
            return;
        
        int partition = quicksorts(nums,s,e);

        quicksort(nums,s, partition-1);
        quicksort(nums,partition+1, e);
        
        
    }
};


int main() {
    vector<int> nums = {80, 11, 3,5,25,5,2,6};
    Solution sol;
    sol.quicksort(nums,0,7);
    for(int i = 0; i<8; i++){
        cout<<nums[i]<<" ";
    }
    return 0;
}



