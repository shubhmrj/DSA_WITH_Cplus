#include<iostream>
#include<string>
#include<vector>
using namespace std;

class Solution{
    public:
        string reverseWords(string s) {
           
            vector<string> res;
            string e;
            string r;

            int n = s.size();

            for(int i =0; i <n; i++){
                if(s[i] == ' '){
                    if(!e.empty())
                        res.push_back(e);
                        e.clear();
                }
                else{
                    e.push_back(s[i]);
                }

            }
            if(!e.empty())
                    res.push_back(e);
                    e.clear();


            for(int j = res.size()-1 ; j >=0; j--){
                r += res[j];
                
                if(j != 0){
                    r += ' ';
                }
            }

        return r;
    }
};

int main(){
    string s =  "the sky is    blue";

    Solution sol;

    cout << sol.reverseWords(s);

    return 0;
    
}