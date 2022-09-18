#include<iostream>
#include<vector>
using namespace std;



vector<int> removeDuplicates(vector<int>& nums) {

    vector<int> final;
    for(int i=0; i<nums.size(); ++i){
        bool duplicate = false;
        for(int j = i+1; j< nums.size();++j){
            if(nums[i] == nums[j]){
                // found duplicate
                duplicate = true;
            }
        }
        if( duplicate == false){
            final.push_back(nums[i]);
        }
    }

    return final;
}


int main(){

    vector<int> arr;
    arr.push_back(1);
    arr.push_back(1);
    arr.push_back(2);
    arr = removeDuplicates(arr);

    for(int i= 0; i<arr.size(); ++i){
        cout<<arr[i]<<endl;
    }
    return 0; 
}