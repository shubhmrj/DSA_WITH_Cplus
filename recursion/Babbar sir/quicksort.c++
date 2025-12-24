
/*
                ┌──────────────────┐
                │    Array A        │
                │ [10, 4, 8, 3, 1]  │
                └──────────────────┘
                          │
                          ▼
                ┌──────────────────┐
                │ Choose Pivot =10 │
                └──────────────────┘
                          │
                          ▼
            ┌────────────────────────────────┐
            │ Partition around pivot (10)     │
            │  Elements ≤10   |   >10         │
            └────────────────────────────────┘
                          │
                          ▼
              [4, 8, 3, 1]   10
                    │
         ┌──────────┴──────────┐
         ▼                     ▼
  QuickSort(Left)        QuickSort(Right)
  [4, 8, 3, 1]                 [] 
         │
         ▼
  Choose Pivot = 4
         │
         ▼
  Partition → [3,1] 4 [8]
         │
         ▼
   Recursively sort
         │
         ▼
   1   3   4   8
         │
         ▼
 Final Combined Output:
──────────────────────────────────────────
       [1, 3, 4, 8, 10]
──────────────────────────────────────────
*/




#include<iostream>
#include<vector>
using namespace std;



class Solution{
    public:
        int quicks(vector<int> &nums,int s, int e){
            int pivot = nums[s];
            int cnt = 0;
            for(int i = s+1; i<=e; i++) {
                if(nums[i] <=pivot) {
                    cnt++;
                }
            }

            int pivotIndex = s + cnt;
            
            swap(nums[pivotIndex],nums[s]);

            int i =s;
            int j= e;

            while(i<pivotIndex && j>pivotIndex){
                while(nums[i]<=pivot){
                    i++;
                }

                while(nums[j]>pivot){
                    j--;
                }

                if(i < pivotIndex && j > pivotIndex) {
                    swap(nums[i++], nums[j--]);
                }            
            }
            return pivotIndex;
        }

        void quicksort(vector<int> &nums,int s, int e){
            if(s>=e){
                return;
            }

            int p = quicks(nums,s,e);

            quicksort(nums,s,p-1);
            quicksort(nums,p+1,e);
        }
};

int main(){
    vector<int> nums = {30,12,25,12,35,1,5,6,5,8,8,10};
    Solution sol;
    sol.quicksort(nums,0,nums.size()-1);

    for(int num:nums){
        cout<<num<<" ";
    }
    return 0;
}

