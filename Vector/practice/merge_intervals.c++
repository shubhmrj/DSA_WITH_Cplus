#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());

        vector<vector<int>> res;
        vector<vector<int>> res1;

        int i = 0;
        int j = 0;
        while(i < intervals.size()){

            int start = intervals[i][0];
            int end = intervals[i][1];


            if( i+1 < intervals.size() && end >= intervals[i+1][0]){
                end = max(end, intervals[i+1][1]);
                i++;

            }
            i++;

            res.push_back({start,end});
            
        }

        while(j < res.size()){

            int start = res[j][0];
            int end = res[j][1];


            if( j+1 < res.size() && end >= res[j+1][0]){
                end = max(end, res[j+1][1]);
                j++;

            }
            j++;

            res1.push_back({start,end});
            
        }

        return res1;
        
    }
};

int main(){
    vector<vector<int>> nums = {
    {1,4}, {2,5}, {3,6}
};

    Solution sol;
    vector<vector<int>>nums1 = sol.merge(nums);

    for(int i = 0; i < nums1.size(); i++){
        for(int j = 0; j <nums1[0].size(); j++){
            cout<< nums1[i][j]<< " ";
        }
        cout<<endl;
    }

    return 0;
}