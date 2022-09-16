#include<iostream>
#include<vector>
using namespace std;


vector<int> duplicateZeros(vector<int>& arr){

       //int j=0;
        int count=0;
        //int references 
    //vector<int> new_arr;
    // find 0;
    // if found delete the last element, and 
        // add 0 to the last element, 
        
    // now put the 0 next to the zero,
        
        vector<int> new_arr;
       for(int i=0;i<arr.size();++i){
           
           if(arr[i]== 0){
               new_arr.push_back(arr[i]);
               new_arr.push_back(0);
               //arr.pop_back();
               //arr.push_back(j);
               count++;
           } else {
            new_arr.push_back(arr[i]);
           }
       }
        
        
        for(int i=0; i<count;++i){
            //swap
            new_arr.pop_back();
        }

    return new_arr;
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


vector<int> new_vec = duplicateZeros(vec);

for(int i=0;i<new_vec.size(); ++i){
    cout<<new_vec[i]<<endl;
}


return 0;
}