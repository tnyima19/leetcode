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

    /*
operations that arrays support 
Array is a data structure which means taht it stores data in a specific formate
and supports certain operations on the data it stores. 

In this section , we'll be looking at three basic operations that are supported by almost every data 
structre; insertion, deletion and search. 

Insertion. 
    1. insert new element at the end of the array . 
    2. Inserting a new element at the beginning of the array . 
    3. Iinserting a new element at any given index. 


    2. insert at the start of an array 
        we need to shift all other elements in the array to the right by one index to create space
        for the new element. This is very costly operation, since each of hte existing elements has to 
        be shifted one step to the right . This is not constant time operation. 
        O(n): lineart time complexity, where n is the leght of an array . 
            for(int i=arr.size()-2; i>= 0;--i){
                arr[i+1]= arr[i];
                if(i ==0){
                    arr[i] = new_ele;
                }
            }

    3.Inserting anywhere in the array . 
    Similarly for inserting at any given index, we first need to shift all the elements from taht
    index onwards one positoin to the right. Once the space is created for the new element, we proceed
    with the insertion. If you think about it, insertion at the beginning is basically a special case 
    of inserting an element at a given index- in that case, the given index was zero. 
    

    insert num;
    insert at position n;
    for(int i=arr.size()-2;i>=n; --i){
        arr[i+1]= arr[i];

    }
    arr[n] = num;


Array Deletions, 
    1. Delete last elements, create arr with one less arr size and add all elment except last
    2. delete first elements 
    3. delete at any given element, 
        int new_arr[4];
        int arr[5];
        int curr = 0;
        for(int i=0; i<arr.size(); ++i){
            if(i != target){
                new_arr[curr] = arr[i]
                curr++;
            }
        }

*/