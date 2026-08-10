#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        vector<int>res;
        int i = prices[0];
        int sum = 0 , ans =0;
        for(int j = 1; j<prices.size();j++){
            // cout<<"i: "<<i <<"  j: "<<j<<endl;
            if(i>=prices[j]){
                i=prices[j];
            }   
            else{
                int k =i;
                int p = j;
                while(k<prices[p]){
                    ans += prices[j]-i;
                    cout<<"i: "<<i <<"  j: "<<j<<endl;
                    k=prices[p];
                    p++;
                }
                res.push_back(ans);
            }
            // cout<<"i: "<<i <<"  j: "<<j<<endl;
            
        }
        sort(res.begin(), res.end());
            int n = res.size();
            
            if (n >= 2) {
                sum = res[n-2] + res[n-1];
            } else {
                sum = 0;  
            }
        return sum;
    }
};

int main(){
    vector<int> prices ={1,2,3,4,5};
    Solution sol;
    cout<<sol.maxProfit(prices);
    return 0;
}