#include <iostream>
#include<vector>
using namespace std;
//this is forced method, 
// find a method with shorter time. 
vector<int> sortedSquares(vector<int>& nums){
     //vector<int> sorted_nums;

        
        for(int i=0; i<nums.size(); ++i){
            nums[i]= nums[i] * nums[i];
            
        }
        
        for(int j=0; j<nums.size();++j){
            for(int i=j+1;i<nums.size();++i){
                if(nums[i] < nums[j]){
                    // swap sides, 
                    int temp = nums[i];
                    nums[i] = nums[j];
                    nums[j] = temp;
                }
            }
            
        }
        
        return nums;
        
}

int main(){
vector<int> arr;
arr.push_back(-4);
arr.push_back(-1);
arr.push_back(0);
arr.push_back(3);
arr.push_back(10);

sortedSquares(arr);
for(int i =0;i<arr.size();++i){
    cout<<arr[i]<<endl;
}

    return 0;
}