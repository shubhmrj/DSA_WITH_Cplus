// SET OPeration on sorted and unsorted arrays
// This code performs the union operation on two arrays, arr1 and arr2, and stores the result in arr3.

#include<iostream>
using namespace std;

struct Array{
    int *A;
    int size;
    int length;
};
void display(struct Array arr) {
    cout << "Elements are: ";
    for (int i = 0; i < arr.length; i++) {
        cout << arr.A[i] << " ";
    }
    cout << endl;
}

// Union performs on unsorted arrays
void arrayunion(struct Array *arr1, struct Array *arr2, struct Array *arr3) {
    int i , j = 0, k = 0 ;

    int len= arr1->length;
   
    for(i=0; i< arr1->length ;i++){
        arr3->A[k] = arr1->A[i];
        k++;  
        
    }

    for(int p=0; p < arr2->length ;p++){
        if (arr3->A[p] != arr2->A[j]){ 
            arr3->A[len++] = arr2->A[j]; 
            j++; 
            
        } else {
            j++; 
        }
    }
   
     arr3->length = len; 
    
}

void arrayunion2(struct Array *arr1, struct Array *arr2, struct Array *arr3) {
    int i =0 , j = 0, k = 0 ;

    while(i < arr1->length && j<arr2->length){
        if(arr1->A[i]<arr2->A[j]){
            arr3->A[k++] = arr1->A[i++];
        } 
        else if(arr1->A[i] > arr2->A[j]){
            arr3->A[k++] = arr2->A[j++];
        }
        else{
            j++;
        } 

        cout<< "i: " << i << " j: " << j << " k: " << k << endl;
    }
    for(; i < arr1->length; i++){
        arr3->A[k++] = arr1->A[i];
    }
    for(; j < arr2->length; j++){
        arr3->A[k++] = arr2->A[j];
    }
    arr3->length = k;
    
}

void intersectionsorted(struct Array *arr1, struct Array *arr2, struct Array *arr3) {
    int i = 0, j = 0, k = 0;

    while(i<arr1->length && j<arr2->length) {
        if(arr1->A[i] < arr2->A[j]) {
            i++;
        } else if(arr1->A[i] > arr2->A[j]) {
            j++;
        } else {
            arr3->A[k++] = arr1->A[i];
            i++;
            j++;
        }
    }
    
    arr3->length = k;
}

void intersection2(struct Array *arr1, struct Array *arr2, struct Array *arr3) {
    int i , j , k = 0;
    

    for(i = 0; i < arr1->length ; i++) {
        
        for(j = 0; j < arr2->length; j++) {
        if (arr1->A[i] == arr2->A[j]) {
            
            arr3->A[k++] = arr1->A[i]; 
            
            break; 
        }

    }
    arr3->length = k;
    }
}

void differenceunsorted(struct Array *arr1, struct Array *arr2, struct Array *arr3) {
    int i , j, k = 0;

    for(i = 0; i < arr1->length ; i++) {
        for(j = 0; j < arr2->length; j++) {
        if (arr1->A[i] == arr2->A[j]) {
            break; // If found in arr2, break the inner loop
        }
        else if (j == arr2->length - 1) {
            // If we reach the end of arr2 and didn't find a match, add to arr3
            arr3->A[k++] = arr1->A[i];
        }
        else {
            continue; // If not found, continue to the next element in arr2
        }

    }
    arr3->length = k;
    }
    
}

void differencesorted(struct Array *arr1, struct Array *arr2, struct Array *arr3) {
    int i = 0, j = 0, k = 0;

    while(i < arr1->length && j < arr2->length) {
        if(arr1->A[i] < arr2->A[j]) {
            arr3->A[k++] = arr1->A[i++];
        } else if(arr1->A[i] > arr2->A[j]) {
            j++;
        } else {
            i++;
            j++;
        }
    }
    for(;i < arr1->length; i++) {
        arr3->A[k++] = arr1->A[i];
    }
    
    
    arr3->length = k;
}

int main(){
    struct Array arr1;
    
    arr1.A = new int[5]; 
    arr1.A[0] = 10;
    arr1.A[1] = 20;  
    arr1.A[2] = 30; 
    arr1.A[3] = 40;
    arr1.A[4] = 60; 
    
    arr1.size = 10; 
    
    arr1.length = 5; 

    struct Array arr2;
    arr2.A=new int[5]; 
    arr2.A[0] = 15; 
    arr2.A[1] = 20;     
    arr2.A[2] = 30; 
    arr2.A[3] = 40; 
    arr2.A[4] = 50; 
    
    arr2.size = 10; // Set the maximum size of arr2
    
    arr2.length = 5; // Set the current number of elements in arr2

    struct Array arr3;
    arr3.size = arr1.length + arr2.length;
    arr3.length = 0; 
    arr3.A = new int[arr3.size]; 

    differencesorted(&arr1, &arr2, &arr3); 
    cout << "The array is: ";
    display(arr3); 

    delete[] arr1.A; 
    delete[] arr2.A; 
    delete[] arr3.A; 
    return 0;
}