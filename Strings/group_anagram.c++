#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;


int main(){

    vector<string> nums = {"cat","rat","bat","tba","abt"};

    vector<vector<string>> res;


    for(int i = 0; i < nums.size(); i++){
        sort(nums[i].begin(), nums[i].end());
    }

    sort(nums.begin(), nums.end());

    for(int i = 0; i < nums.size(); i++){
        cout<< nums[i] << " ";
    }
    cout<< endl;


    
    vector<string> temp ;
    for(int i = 1; i < nums.size()+1; i++){

        if(nums[i] == nums[i-1]){
            temp.push_back(nums[i-1]);
        }

        else{
            temp.push_back(nums[i-1]);
            res.push_back(temp);
            temp.clear();
        }

    }


    for(int i = 0; i < res.size(); i++){
        for(int j = 0; j < res[i].size(); j++){
            cout<< res[i][j] << " ";
        }
        cout<<endl;
    }






}