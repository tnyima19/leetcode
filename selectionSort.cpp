#include<iostream>
#include<vector>

using namespace std;

void selectionSort(vector<int>& arr){

    for(int i=0;i<arr.size()-1; ++i){
        
        int k = i;
        for(int j=i;j<arr.size();++j){
            //k=j;// min index
            if(arr[i]> arr[j]){
                k = j;// j is the location of arr less than arr[i]
            }
        }
        // swap min and i
        int temp= arr[i];
        arr[i]= arr[k];
        arr[k]= temp;
    }


}

int main(){
    vector<int> arr;
    arr.push_back(5);
    arr.push_back(4);
    arr.push_back(3);
    arr.push_back(2);
    arr.push_back(1);

    selectionSort(arr);
    for(int i=0; i<arr.size();++i){
        cout<<arr[i]<<endl;
    }

}

/*
is it stable or adptive?

it is not adaptive because, we cannot know if its s
whether it is sorted or not we cannot idnetify until O(n2)



Stable. 
stability is defined by the order of duplicate numbers, the second identical number, 
may come before the first identical number, 
hence it is not stable. 



*/