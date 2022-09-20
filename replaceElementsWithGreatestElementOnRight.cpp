#include<iostream>
#include<vector>
using namespace std;
void shift(vector<int>& arr){
    for(int i=0;i<arr.size()-1;++i){
        arr[i] = arr[i+1];
    }
}

vector<int> replaceElements(vector<int>& arr) {
        if(arr.size() == 1){
            arr[0] = -1;
            return arr;
        }
        for(int i=arr.size()-1;i>0;--i){
            //if( i == arr.size()-1){
              //  arr[i] = -1;
            //}
            //int k = arr[i];
            if(arr[i]> arr[i-1]){
                arr[i-1] = arr[i];
            }
        }
        shift(arr);
        arr[arr.size()-1] = -1;
        
        return arr;
    }

int main(){
vector<int> arr;
arr.push_back(17);
arr.push_back(18);
arr.push_back(5);
arr.push_back(4);
arr.push_back(6);
arr.push_back(1);

arr = replaceElements(arr);
for(int i=0;i<arr.size();++i){
    cout<<arr[i]<<endl;
}

    return 0;
}

/*
IN-PLACE ARRAY OPERATIONS. 
In programming interviews, the interviewer often expets you to minise the time
and space time complexity of your implementatio. In-PLACEarray operations help to reduce
space complexity, adn so are a class of techniquest atha pretty much every body encounters. regularly 
in interviews. 

So, what are in-place array operations? 
exmple: 
given an array of integers, return an array where very element at an 
enven-indexed position is squared. 

input: array = [9,-2,-9, 11, 56, -12, -3]
Output: [81, -2, 81, 11, 3136, -12, 9]
Explanation: The numbers at even indexes (0,2,4,6) have been squared where as the numbers at odd indexes 1,3, 5 have been left the same, 

This problem is hopefull very straight forward. Have a quick thingk about how you would implement it as an algorithm though , possibly jotting down some code on a piece ofparet 


method one 
create a new array and 
put squares on even and dont hcange on odd.
O(N)
inefficient. 

method 2. 
iterate over the original arry itself, oeverwriting every even-indexed element with its own square. This way, we won't need that extra space. It is this technique of working directly in teh input array. adn not creating a new array. that we call in-place .

big focus on minimising both time and space somplexity of algorithms. 


A important difference for in-place vs not-inplace is that in place modifies the input array. this means that other functioncan no longer access the original data, because it has been overwritten. We'll talk more about this in a bit. 
*/