#include<iostream>
#include<vector>
using namespace std;


int heightChecker(vector<int>& heights){


    for(int i=0;i<heights.size()-1;++i){// goes up to the second last element
        int j= i+1;
        while(heights[i]> heights[j]){
            swap(heights[i], heights[i+1]);
            i++;
        }

    }




}