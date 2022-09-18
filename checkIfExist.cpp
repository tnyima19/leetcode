#include<iostream>
#include<vector>
using namespace std;

/*
using forced double forloop method, 
and using comparison. 

*/
 bool checkIfExist(vector<int>& arr) {
        for(int i=0; i<arr.size()-1;++i){
            for(int j=i+1; j<arr.size(); ++j){
                if(i!=j){
                    cout<<"Iam i != j"<<endl;
                    if(0<=j && i<arr.size()){
                        cout<<"i am ar 0<= i and j<arr.size()"<<endl;
                        if(arr[i] == 2* arr[j] || arr[j] == 2* arr[i]){
                            //cout<<"I am at arr[i] == 2* arr[j]"<<endl;
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
    }else {
        cout<<"false"<<endl;
    }



    return 0;
}