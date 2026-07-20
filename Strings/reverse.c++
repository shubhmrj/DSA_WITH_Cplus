#include<iostream>
#include<string>

using namespace std;

class Solution{
    public:

        void str(string &s){
            int n = s.size();
            int i =0;
            int j = n-1;

            while( i < j){

                // swap(s[i++], s[j--]); 
                
                char temp = s[i];
                s[i] = s[j];
                s[j] = temp;
                j--;
                i++;
            }
        }
};

int main(){
    string s = "shubham";

    Solution sol;
    sol.str(s);

    cout<<s << endl;

    sol.str(s);

    cout<<s << endl;


}