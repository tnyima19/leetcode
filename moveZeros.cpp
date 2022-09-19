#include<iostream>
#include<vector>
using namespace std;

void shift(vector<int>& nums, int index){

    for(int i =index; i<nums.size()-1; ++i){
        nums[i] = nums[i+1];
    }
}

void moveZeros(vector<int>& nums){

    int j = nums.size()-1// the last element
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