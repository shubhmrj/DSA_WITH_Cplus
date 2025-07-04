#include<iostream>
using namespace std;

struct Array{
    int *A;
    int size;
    int length;

};

void display (struct Array arr){
    cout<<"Elements are: ";
    for(int i = 0; i < arr.length; i++){
        cout<<arr.A[i]<<" ";
    }
    cout<<endl;
}

int binarysearch(struct Array arr,int key){

    int l=0;
    int h=arr.length-1;
    while (l <=h) {

        int mid =(l + h)/2
        ;
        if (key==arr.A[mid]){
                return mid;
 
        }
        else if (key<arr.A[mid]){
            h=mid-1;
        }
        else{
            l=mid+1;
        }
        // cout<<"l: "<<l<<" h: "<<h<<" mid: "<<mid<<endl;
    }
    
    return -1;

}

int main(){
    struct Array arr;
    cout<<"Enter the size of the array: ";
    cin>>arr.size;
    arr.A = new int[arr.size];
    arr.length = 0;

    int n;

    cout<<"Enter the number of elements in the array: ";
    cin>>n;
    cout<<"Enter the elements of the array in sorted order: ";
    for(int i = 0; i < n; i++){ 
        cin>>arr.A[i];
    }  

    arr.length = n;
    display(arr);
    cout<<binarysearch(arr, 2);
}