#include<iostream>
#include<vector>
using namespace std;



int singleNonDuplicate(vector<int>& nums) {
    // suggestion brute force, 
    // best way is to use Binary
    
    int count = 0;
    int num = 0;
    
    if(nums.size() == 1){
        return nums[0];
    }
    
    for(int i=0;i<nums.size();(i+=2)){
        //int j = i+1;
        if(nums[i]!= nums[i+1]&& i<nums.size()){
            num = nums[i];
            break;
            
        }
        
    }
    
    return num;
}

int main(){


    return 0;
}


/*
Search in an array. 
speed of searching for an element ina data structure 
that helps programmers make design choices for their codebases. 

There is more than one way of searching an array, but for now, we're going to focus 
on teh simplest way. Searching means to find an occurrence of a particular element in teh aArray 
and return its position. 
We might need to search an array to find out whether or not an 
element is present in teh array. We might also want to search an array that is arraged in 
a specific fashion to determine which index to insert a new element at. 



If we know the index in the array that may contain the element 
we're looking for, then the search becomes a constant time 
operation- we simply go to the given index and check whether or not 

*/