// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;


// // class Solution {
// // public:
// //     int maxArea(vector<int>& height) {

// //         int n =height.size();
// //         sort(height.begin(),height.end());


// //         for(int i=n-1;i>=1;i--) {
// //             if(height[i-1]!=height[i]){
                
// //                 return height[i-1]*height[i-1];
// //             }
// //         }
// //      return -1;   
// //     }
// // };

// class Solution {
// public:
//     int maxArea(vector<int>& height) {

//         int n =height.size();
//         int secondlargest =-1;
//         int largest=1;

//         for(int i=0;i<n;i++) {
//             if(height[i]>largest){
//                 secondlargest=largest;
//                 largest=height[i];
//             }
            
//         }
//      return secondlargest*secondlargest;   
//     }
// };

// int main(){
//     vector<int> height = {1,8,6,2,5,4,8,3,7};
    
//     Solution sol;

//     cout<<sol.maxArea(height);

// }

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxArea = 0;
        int left = 0, right = height.size() - 1;

        while (left < right) {
            int h = min(height[left], height[right]);
            int w = right - left;
            maxArea = max(maxArea, h * w);

            // Move the shorter line inward
            if (height[left] < height[right]) {
                left++;
            } else {
                right--;
            }
        }
        return maxArea;
    }
};

int main() {
    vector<int> height = {1,8,6,2,5,4,8,3,7};

    Solution sol;
    cout << sol.maxArea(height) << endl;
}
