#include<iostream>
#include<vector>
using namespace std;


bool validMountainArray(vector<int>& arr){
int top;
    if(arr.size() <= 2 ){// for there to be mountain we need atleast 3 elements
                return false;
            }
    for(int i=0;i<arr.size()-1;++i){
        if(arr[i]== arr[i+1]){
            return false;
        }
        
        if(arr[i]> arr[i+1]){
            top = i;// top index.
            
            for(int i=0; i<top-1;++i){
                
                if(arr[i]>arr[i+1] ){
                   // cout<<"I am"<<endl;
                    //cout<<arr[i]<<" "<<arr[i+1]<<endl;
                    return false;
                }
            }
            for(int j=top; j<arr.size()-1;++j){
                if(arr[j]<arr[j+1]){
                    return false;
                }
            }
        }
    }
    return true;

}

int main(){
    vector<int> arr;
    arr.push_back(0);
    arr.push_back(3);
    arr.push_back(2);
    arr.push_back(1);

    if(validMountainArray(arr) == false ){
        cout<<"false"<<endl;
    }else{
        cout<<"true"<<endl;
    }

    return 0;
}