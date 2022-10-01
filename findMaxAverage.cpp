#include<iostream>
#include<vector>
using namespace std;

double findMaxAverage(vector<int> nums, int k){

     // easy cases, 
        double max =0;
        double max_avg = 0;
        if(nums.size()== 1){
            max = nums[0];
            
            
        } else {
        for(int i=0;i<=nums.size()-k;++i){
            
            double total = 0;
            for(int j=i;j<i+k;++j){
                //cout<<total<<endl;
                total += nums[j];
                cout<<total<<endl;
                
            }
            if(total < 0 && i == 0){
                max = total;
            }
            if(max< total){
                
                max = total;
                cout<<"max"<<max<<endl;
            }
        }
        }
         max_avg = max / k;
        return max_avg;
        
        
}
/*
problem 643
maximum average Subarray I 
variable called max
set the max to the first. 
if something is bigger than max 

hint is that standard sliding window. 
what is the diff between red and blue window, 
two box method, 
    total = nums[0]+num[1]+ num[2] + num[3];

    for(int i=0;i<k;++i){
        total += nums[i];
    }

    for(int i=0;i<nums.size()-k;++i){
        total = total + num[k+i] - nums[i-1];
    }

    how many traversals of the lists are made up?
    how many traversals would it take?
        only once, 

*/

int main(){
    vector<int> arr;
    arr.push_back(2);
    arr.push_back(-8);
    arr.push_back(-10);
    arr.push_back(-5);
    arr.push_back(-3);
    cout<<findMaxAverage(arr, 4)<<endl;
    // int new_arr = [4433,-7832,-5068,4009,2830,6544,-6119,-7126,-780,-4254,-8249,-9168,9492,402,5789,6808,8953,5810,-7353,7933,4766,5182,-3230,-1989,5786,6922,-4646,4415,-9906,807,-6373,3370,2604,8751,-9173,-2668,-6876,9500,3465,-1900,4134,-1758,-1453,-5201,-9825,4469,-1999,-1108,1836,3923,6796,-5252,9863,-5997,-3251,9596,-3404,-540,2826,-1737,3341,-3623,-9885,2603,-5782,8174,2710,6504,-4128]
    // int k = 59;
    // cout<<"ans"<<findMaxAverage(new_arr, k)<<endl;

    return 0;
}