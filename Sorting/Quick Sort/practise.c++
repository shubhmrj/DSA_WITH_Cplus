#include<iostream>
#include<vector>

using namespace std;

class Solution{
    public:
        int quicks(vector<int> &nums,int s, int e){
            int count = 0;
            int pivot = nums[s];

            for(int i = s; i <= e; i++){
                if(nums[i] < pivot)
                    count++;
            }

            int pivotindex = s + count;
            swap(nums[s], nums[pivotindex] );

            int i = s;
            int j = e;

            while( i < pivotindex && j > pivotindex){
                while(nums[i] < pivot) i++;
                while(nums[j] > pivot) j--;

                if(nums[i] > pivot && nums[j] < pivot){
                    swap(nums[i++], nums[j--]);
                }
                
            }
            return pivotindex;

        }
        void quicksort(vector<int> &nums, int s, int e){
            
            if(s >=e)
                return;

            int index = quicks(nums, s, e);

            quicksort(nums, s, index-1);
            quicksort(nums, index+1, e);
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