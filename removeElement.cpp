#include<iostream>
#include<vector>
using namespace std;

// array nums, 
// int val
// remove all occurrencs of val in nums in-place. 
// the relative orders may be changed. 
 void shift(vector<int>& arr, int a){
        for(int i =a; i<arr.size()-1;++i){
            arr[i] = arr[i+1];
        }
    }
    
    
    int removeElement(vector<int>& nums, int val) {
        int k;// number of arrays after the values.
        int count_deleted = 0;
       
        // first target the values, how many and where
        
        for(int i=0; i<nums.size()-1; ++i){
            while(nums[i]== val && i< nums.size()-1-count_deleted){
                //nums[i]= nums[i+1];// delete the curr
                // shift
                //cout<<"I am"<<endl;
                shift(nums, i);
                //k++;
                count_deleted++;
            }
           
        }
        
        return count_deleted;
    }

    int main(){
        vector<int> arr;
        arr.push_back(3);
        arr.push_back(2);
        arr.push_back(2);
        arr.push_back(3);
        // arr.push_back(3);
        // arr.push_back(0);
        // arr.push_back(4);
        // arr.push_back(2);
        removeElement(arr, 3);

        for(int i=0; i<arr.size(); ++i){
            cout<<arr[i]<<endl;

        }

        return 0;
    }