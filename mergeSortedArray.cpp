#include<iostream>
#include<vector>
using namespace std;


  vector<int> merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
       // merged
      vector<int> final_arr;  
        
       
        if(n > m){
        for(int j = 0; j<n{
        for(int i=0;i<n; ++i){
         if(nums1[i]> nums2[i]){
            final_arr.push_back(nums2[i]);
         }else if (nums1[i] == nums2[i]){
            final_arr.push_back(nums1[i]);
            final_arr.push_back(nums1[i]);
         }else {
            final_arr.push_back(nums1[i]);
         }
        }
        }
        }else {
            for(int i=0;i<m; ++i){
         if(nums1[i]> nums2[i]){
            final_arr.push_back(nums2[i]);
         }else if (nums1[i] == nums2[i]){
            final_arr.push_back(nums1[i]);
            final_arr.push_back(nums1[i]);
         }else {
            final_arr.push_back(nums1[i]);
         }
        }



        }

    nums1 = final_arr;

    return nums1;
        
      
        
    }

    int main(){
        vector<int> num1; 
        num1.push_back(4);
        num1.push_back(5);
        num1.push_back(6);
        num1.push_back(0);
        num1.push_back(0);
        num1.push_back(0);


        vector<int> num2;
        num2.push_back(1);
        num2.push_back(2);
        num2.push_back(3);

        int m = 3;
        int n = 3;
        vector<int> final = merge(num1, m, num2, n);


        for(int i=0;i<final.size(); ++i){
            cout<<final[i]<<endl;
        }
        return 0;
    }