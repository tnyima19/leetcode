#include<iostream>
#include<vector>
using namespace std;


 bool checkIfExist(vector<int>& arr) {
        for(int i=0; i<arr.size()-1;++i){
            for(int j=i+1; j<arr.size(); ++j){
                if(i!=j){
                    if(0<=i && j<arr.size()){
                        if(arr[i] == 2* arr[j]){
                            return true;
                        }
                    }
                }
            }
        }
        return false;
        
    }



int main(){
    vector<int> arr;
    
    arr.push_back(7);arr.push_back(1);arr.push_back(14);arr.push_back(11);
    if(checkIfExist(arr)== true){
        cout<<"true"<<endl;
    }



    return 0;
}