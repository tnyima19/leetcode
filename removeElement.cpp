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
        int final_ele = nums.size()-1;
       
        // first target the values, how many and where
        if(nums.size()==0){
            return 0;
        }
        if(nums.size()==1){
        if(nums[0]== val){
            
            nums.pop_back();
            cout<<nums.size()<<endl;
            return 0;
        }else 
            return 1;
       }
        for(int i=0; i<nums.size(); ++i){
            while(nums[i]== val && i< nums.size()-count_deleted){
                //nums[i]= nums[i+1];// delete the curr
                // shift
                //cout<<"I am"<<endl;
                shift(nums, i);
                nums[final_ele] = val;
                //k++;
                count_deleted++;
            }
            
           
        }
        //cout<<"I am count"<<count_deleted<<endl;
        
        if(count_deleted>0){
            return nums.size()-count_deleted;
        }
            return nums.size()-count_deleted;
    }



    int main(){
        vector<int> arr;
        arr.push_back(4);
        arr.push_back(5);
        //arr.push_back(2);
        //arr.push_back(3);
        // arr.push_back(3);
        // arr.push_back(0);
        // arr.push_back(4);
        // arr.push_back(2);
        removeElement(arr, 4);

        for(int i=0; i<arr.size(); ++i){
            cout<<arr[i]<<endl;

        }

        return 0;
    }