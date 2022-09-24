#include<iostream>
#include<vector>
using namespace std;



vector<int> removeDuplicates(vector<int>& nums) {

  // count unique element
  int count = 0; // count unique elements.
  vector<int> final; 

  for(int i=0;i<nums.size();++i){
    if(i == 0 || nums[i] != nums[i-1]){ // nums[0] is always a unique element
        count++;
        final.push_back(nums[i]);
    }
  }
  //cout<<count<<endl;
    return final;
}
int removeDuplicates2(vector<int>& nums) {
         int count = 0;
        int curr = nums[0];
        vector<int> final;
        for(int i=0;i<nums.size();++i){
            if(curr == nums[i]){
                count++;
            }
            if(curr != nums[i] ||  i ==0){
                final.push_back(nums[i]);
                count = 0;
            }
            
        }
        nums = final;
        return count;
        
    }


int main(){

    vector<int> arr;
    arr.push_back(0);
    arr.push_back(0);
    arr.push_back(1);
    arr.push_back(1);
    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(2);
    arr.push_back(3);
    arr.push_back(3);
    arr.push_back(4);
    arr = removeDuplicates(arr);

    for(int i= 0; i<arr.size(); ++i){
        cout<<arr[i]<<endl;
    }
    return 0; 
}



/*
A BETTER REPEATED DELETION ALGORITHM
Lets look at one more example . This time, the result Array is smalelr 
than the input Array!. How's this going to work? Let's find out! Here's
the problem description. 


Given sorted arrary, remove the duplicates such that each element 
appears only once. 
Input: array = [1,1,2];
output : [1,2];


Input array = [0,0,1,1,1,2,2,3,3,4]
output [0,1,2,3,4]

You've hopefully done this question, back when we were looking 
at deleting items from an array. In that case, your algorithm might have looked 
something like thisk


How to ge the algorithm down to O(N) time complexity. 
If we dont try to do this in-place, then its straight forward .we oculd 
simply iterat through the arry, adding all unique element to a new array. 
Seeing as input array is sorted, we can easily identify all unique elements, as they are first element, and then any
element that is different to the one before it. 

One potential problem is that we actually dont know how long theresult array needs to be
Remember how that must be decieed when the array is created? The best solution for this 
probem is to do an initial pass, couting thenumebr of unique lements. Then , we 
can create teh result array and do a second pass to add the lement
into it. Here's teh code for this approach. 

>do initial pass, counting the number of unique elements. 
> then create teh result array and do a second pass to add the elements into it. 


did you notice the fatal flaw with this approach thou? It is the wrong return type 
we could copy the result array back intot eh intpu array... and then return 
the length.. but his is not what hte question wants us to do. We want to instead do 
the deletions with a space complexity of O(1) and a time complexity of O(N).


*/