#include<iostream>
using namespace std;

class Solution {
public:

    void merge(int *arr, int s, int e){

        int mid = (s+e)/2;

        int len1= mid-s+1;
        int len2= e-mid;

        int *first = new int [len1];
        int *second = new int [len2];

        int mainArrayIndex = s;
        for(int i=0; i<len1; i++) {
        first[i] = arr[mainArrayIndex++];
        }

        mainArrayIndex = mid+1;
        for(int i=0; i<len2; i++) {
        second[i] = arr[mainArrayIndex++];
        }

    //merge 2 sorted arrays     
    int index1 = 0;
    int index2 = 0;
    mainArrayIndex = s;

    while(index1 < len1 && index2 < len2) {
        if(first[index1] < second[index2]) {
            arr[mainArrayIndex++] = first[index1++];
        }
        else{
            arr[mainArrayIndex++] = second[index2++];
        }
    }   

    while(index1 < len1) {
        arr[mainArrayIndex++] = first[index1++];
    }

    while(index2 < len2 ) {
        arr[mainArrayIndex++] = second[index2++];
    }

    delete []first;
    delete []second;

    }
    void mergesort(int *nums ,int s, int e ) {
        if(s>=e){
            return;
        }
        int mid = (s+e)/2;

        mergesort(nums,s,mid);
                
        mergesort(nums,mid+1,e);

        merge(nums,s,e);

    }
};


int main() {
    int arr[8] = {80, 11, 3,5,25,5,2,6};
    Solution sol;
    sol.mergesort(arr,0,7);
    for(int i=0;i<8;i++){
        cout << arr[i] << " ";
    } cout << endl;
    return 0;
}