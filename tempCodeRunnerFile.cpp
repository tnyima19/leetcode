#include<iostream>
#include<vector>
using namespace std;


void duplicateZeros(vector<int>& arr){

       int j=0;
        int count=0;
        //int references 
        
    // find 0;
    // if found delete the last element, and 
        // add 0 to the last element, 
        
    // now put the 0 next to the zero,
        
        vector<int> new_arr;
       for(int i=0;i<arr.size();++i){
           
           if(arr[i]== 0){
               new_arr.push_back(i);
               arr.pop_back();
               arr.push_back(j);
               count++;
           } 
       }
        
        
        for(int i=0; i<count;++i){
            //swap
            int temp = arr[new_arr[i]];
            arr[new_arr[i]]= arr[arr.size()-1-i];   
            arr[arr.size()-1-count] = temp;
        }
}



int main(){

vector<int> vec;
vec.push_back(3);
vec.push_back(0);
vec.push_back(5);
vec.push_back(2);
vec.push_back(0);
vec.push_back(9);
vec.push_back(1);

duplicateZeros(vec);


return 0;
}