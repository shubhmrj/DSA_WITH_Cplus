#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// not solve this

class Solution{
    public:
        vector<vector<int>> merge(vector<vector<int>>& intervals) {
            sort(intervals.begin(), intervals.end());
            vector<vector<int>> result;

            result.push_back(intervals[0]);
            for(int i = 0; i < intervals.size(); i++){
                for( int j = i+1; j <intervals[i].size(); j++ ){
                    if(intervals[i][j] >= intervals[j][i]){
                        result.push_back(intervals[j]);
                    }
                }
                cout << endl;
            }
        
        return result;

    }

};

int main(){
    vector<vector<int>> nums = {
    {8, 10},
    {1, 3},
    {15, 18},
    {2, 6}
};

    Solution sol;
    vector<vector<int>>nums1 = sol.merge(nums);

    for(int i = 0; i < nums1.size(); i++){
        cout<<"{" << " ";
        for(int j = 0; j <nums1[0].size(); j++){
            cout<< nums1[1]<< " ";
        }
        cout<<"}";
        cout<<endl;
    }
    cout<<nums[0];

    return 0;
}