#include<iostream>
#include<vector>
using namespace std;

// Bubble sort 
/*
it is a process where 
swap first two , 
then second two, (if they fulfill the condition)
and go on until the end, 


on first run the greatest will be at the end, 

*/

void swap(int& num_a, int& num_b){
    int temp = num_a;
    num_a = num_b;
    num_b = temp;
}
vector<int> bubbleSort(vector<int> arr){

    // you can also stop the swapping if there are no sorting occurs
    // when its already sorted
    int check_sorting= 0;

    for(int i=0; i<arr.size()-1; ++i){
        for(int j=0;j<arr.size()-1-i; ++j){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
                //cout<<arr[j]<<endl;
                //cout<<arr[j+1]<<endl;
                check_sorting = 1;
            }
            
        }
        if(check_sorting == 0){
            cout<<"I am"<<endl;
            break;// or break 
        }
    }

    return arr;
}


int main(){
    int num = 5;
    vector<int> arr ;
    arr.push_back(8);
    arr.push_back(7);
    arr.push_back(6);
    arr.push_back(5);
    arr.push_back(4);


    vector<int> arr1 = bubbleSort(arr);
    for(int i=0; i<arr1.size(); ++i){
        cout<<arr1[i]<<endl;
    }

    return 0;
}