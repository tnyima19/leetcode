#include<iostream>
#include<vector>
using namespace std;


/*
Given an integer array nums, move all the even
integers at teh beginning of the array followed by all 
odd integers. 

nums = [3,1,2,4]


*/
void swap(int& a, int& b){
    int temp = a;
    a=b;
    b = temp;
}

vector<int> sortArrayByParity(vector<int>& nums){
    int j = nums.size()-1;

    if(nums.size() == 1){
        return nums;
    }

    for(int i=0;i<nums.size();++i){
        if((nums[i]%3 == 0 || nums[i]== 1)){
            
            if(nums[j]%2 == 0 || nums[j]==0 ){
                //cout<<nums[i]<<" change "<<nums[j]<<endl;
                swap(nums[i], nums[j]);
            }else {
                while((nums[j]%3 == 0 || j==1 )&& j>i){ // if last digits happen to be odd
                cout<<"i am here"<<j<<endl;
                --j;
            }
            // -> irrespective of the changes in while loop, it is always swapping 
            // i must stop this,
            if(j > i){
                cout<<"i am in fi"<<endl;
                swap(nums[i], nums[j]);
            }

            }


        }
    }
    return nums;

}

int main(){
    vector<int> arr;
    arr.push_back(0);
    arr.push_back(2);
    arr.push_back(1);
      // arr.push_back(4);
    arr = sortArrayByParity(arr);


    for(int i=0;i<arr.size();++i){
        cout<<arr[i]<<endl;
    }
    

    return 0;
}