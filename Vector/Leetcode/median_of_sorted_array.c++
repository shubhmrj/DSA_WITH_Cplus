#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<double>res;
        int i =0;
        int j =0;

        while(i < nums1.size() && j < nums2.size()){
            if(nums1[i] <= nums2[j]){
                res.push_back(nums1[i]);
                i++;
            }
            else{
                res.push_back(nums2[j]);
                j++;
            }
        }
        while(i<nums1.size()){
            res.push_back(nums1[i]);
            i++;
        }
        while(j<nums2.size()){
            res.push_back(nums2[j]);
            j++;
        }

        for(int k =0; k< res.size(); k++){
            cout<< res[k]<<" ";
        }
        cout<<endl;

        float sum =0;

        cout<<res.size();
        if(res.size() % 2 ==0){
            int node = (res.size() + 1) / 2 -1;
            cout<<node<<endl;

            int node1 = node + 1;
            sum = (res[node] + res[node1]) / 2;

            return sum;
        }

        // int node = (res.size() + 1) / 2 -1;
        // cout<<node<<endl;

        return sum;
    }
};

int main(){
    vector<int> nums1 ={1,3};
    vector<int> nums2 = {2,4};
    Solution sol;
    cout<<sol.findMedianSortedArrays(nums1, nums2);
    return 0;
}