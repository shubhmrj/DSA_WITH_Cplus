#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

class Solution {
public:
    string frequencySort(string s) {
        vector<pair<int, int>> res  = {'z'+1, {0,0}};

        for(char c: s){
            res[c] = {res[c].first+1,c};
        }

        sort(res.begin(), res.end());

        string r = "";

        for(auto i : res){
            r += string(i.first, i.second);
        }

        return r;

    }
};

int main(){
    string s =  "theskisblue";

    Solution sol;

    cout << sol.frequencySort(s);

    return 0;
    
}