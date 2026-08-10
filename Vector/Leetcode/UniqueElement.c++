class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        unordered_map<int,int> p;
        int sum =0;
        for(int num :nums){
            p[num]++;   
        }
        for(auto &t:p){
            if(t.second<2){
                sum +=t.first;
            }
        }
        return sum;
    }
};