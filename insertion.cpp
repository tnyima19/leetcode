#include<iostream>
#include<vector>
using namespace std;

// this is insertionSort
// take an element if it is less than the parior shift 
// save the praticular element 
// shift, the rest 
// for all elme 

void insertionSort(vector<int> arr){

    int save;

    for(int i=0;i<arr.size();++i){
        int j = i-1;
        int save = arr[i];
        while(j>-1 && arr[i] < arr[j]){ // shifting elements
            arr[i] = arr[j];
            arr[j] = save ;
        }
        arr[j+1];
    }

}