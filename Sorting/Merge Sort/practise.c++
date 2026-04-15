#include<iostream>
#include<vector>
using namespace std;

class Solution {
    public:

        void merge(vector<int> &nums, int s, int mid, int e){
            int i =s;
            int j = mid +1;
            vector<int> temp;

            while(i<=mid && j<=e){
                if(nums[i]< nums[j]){
                    temp.push_back(nums[i++]);
                }
                else
                    temp.push_back(nums[j++]);
            }
            

            while(i <= mid) temp.push_back(nums[i++]);
            while(j <= e) temp.push_back(nums[j++]);

             for(int k = 0; k < temp.size(); k++){
                nums[s + k] = temp[k];
            }
        }

        void mergesort(vector<int> &nums,int s, int e){

            if(s>=e){
                return;
            }

            int mid = s + (e-s)/2;

            mergesort(nums,s,mid);
            mergesort(nums,mid+1,e);

            merge(nums,s,mid,e);

        }
};

int main(){
    vector<int>nums = {80, 11, 3,5,25,5,2,6};
    Solution sol;
    sol.mergesort(nums,0,7);
    for(int i=0;i<8;i++){
        cout << nums[i] << " ";
    } cout << endl;
    return 0;
}