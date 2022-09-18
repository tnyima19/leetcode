#include<iostream>
#include<vector>

using namespace std;

void selectionSort(vector<int>& arr){

    for(int i=0;i<arr.size()-1; ++i){
        
        int k = i;
        for(int j=i;j<arr.size();++j){
            //k=j;// min index
            if(arr[i]> arr[j]){
                k = j;
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