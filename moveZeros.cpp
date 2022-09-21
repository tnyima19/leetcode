#include<iostream>
#include<vector>
using namespace std;

void shift(vector<int>& nums, int index){

    for(int i =index; i<nums.size()-1; ++i){
        nums[i] = nums[i+1];
    }
}

void moveZeros(vector<int>& nums){

    int j = nums.size()-1;// the last element
    for(int i=0; i<nums.size();++i){
        while(nums[i]== 0 && i<j){ // while because there may be consecutive zeros.
            shift(nums, i);
            nums[j]=0;
            --j;
        }
    }


}

int main(){


    return 0;
}


/*
BETTER repeated deletion Algorithm -Answer

Anyway , teh algorithm with O(N) space is 
surprisingly similar to the one without. 
Interestingly, its simpler though, because it doesnt' need to firstly
determine the size of the output. 

The original array was modified in-place. And all the unique 
elements got shifted to teh front. The unwanted duplcates 
still exisst in teh array. Hence we need to return the lenght 


Two-pointer technique. 
1. Read all the elements like we did before, to identify.

*/