#include<iostream>
#include<vector>
using namespace std;


void swap(int& a, int& b){
    int temp = a;
    a = b;
    b = temp;

}

  vector<int> merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
       // merged
      //vector<int> final_arr;  
      int check_swap = 0;
        
       // forced method 
       for(int i=m; i<n+m; ++i){
            //cout<<nums1[i]<<endl;
            nums1.pop_back();
       }

       for(int i=0; i<n; i++){
            nums1.push_back(nums2[i]);
       }

       // now sorting using bubbleSort

       for(int i=0; i<nums1.size()-1;++i){
        for(int j=0; j<nums1.size()-1-i; ++j){
            if(nums1[j] > nums1[j+1]){
                swap(nums1[j], nums1[j+1]);
                check_swap = 1;
            }
        }
            if(check_swap == 0){
                break;
            }
       }
        
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