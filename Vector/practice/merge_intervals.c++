#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution{
    public:
        vector<vector<int>> merge(vector<vector<int>>& intervals) {
            sort(intervals.begin(), intervals.end());
            vector<vector<int>> nums;


            for(int i = 0; i < nums.size(); i++){
                for( int j = 0; j <nums[i].size(); j++ ){
                    if(nums[i][j] >= nums[j][i]){
                        cout<<"yes";
                    }
                }
                cout << endl;
            }
        return intervals;

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
    sol.merge(nums);

    for(int i = 0; i < nums.size(); i++){
        cout<<"{" << " ";
        for(int j = 0; j <nums[0].size(); j++){
            cout<< nums[i][j]<< " ";
        }
        cout<<"}";
        cout<<endl;
    }
    return 0;
}