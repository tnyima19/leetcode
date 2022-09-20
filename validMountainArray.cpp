#include<iostream>
#include<vector>
using namespace std;


bool validMountainArray(vector<int>& arr){
int rand = 9999;
int top = rand;
    if(arr.size() <= 2 ){// for there to be mountain we need atleast 3 elements
                return false;
            }
    for(int i=0;i<arr.size()-1;++i){
        //if(arr[i]== arr[i+1]){
        //    return false;
        //}
        if(arr[i]== arr[i+1] && i+1 != arr.size()-1){
            cout<<"i am here"<<endl;
            return false;
        }
        if(arr[i]> arr[i+1]){
            top = i;// top index.
            
            //cout<<"i am"<<endl;
            if(arr[top] == arr[arr.size()-1]){
                cout<<i<<endl;
                cout<<"but"<<endl;
                return false;
            }
            
            for(int i=0; i<top;++i){
                
                if(arr[i]>=arr[i+1] && i+1< top ){
                    cout<<i<<":"<<arr[i]<<"arr[i+1]: "<<arr[i+1]<<endl;
                    cout<<"i am at this"<<endl;
                    return false;
                }
            }
            for(int j=top; j<arr.size()-1;++j){
                //cout<<"here"<<endl;
                if(arr[j]<=arr[j+1]){
                    cout<<"here"<<endl;
                    return false;
                }
            }
        }
        
    }
    if(top == rand ){
        cout<<"i am "<<endl;
            return false;
        }
    return true;
        

}

int main(){
    vector<int> arr;
    arr.push_back(4);
    arr.push_back(20);
    arr.push_back(32);
    arr.push_back(45);
    arr.push_back(49);
    arr.push_back(31);
    arr.push_back(21);
    arr.push_back(20);
    arr.push_back(16);
    arr.push_back(11);
    arr.push_back(8);

    if(validMountainArray(arr) == false ){
        cout<<"false"<<endl;
    }else{
        cout<<"true"<<endl;
    }

    return 0;
}

/*
Search in an array. 
speed of searching for an element ina data structure 
that helps programmers make design choices for their codebases. 

There is more than one way of searching an array, but for now, we're going to focus 
on teh simplest way. Searching means to find an occurrence of a particular element in teh aArray 
and return its position. 
We might need to search an array to find out whether or not an 
element is present in teh array. We might also want to search an array that is arraged in 
a specific fashion to determine which index to insert a new element at. 



If we know the index in the array that may contain the element 
we're looking for, then the search becomes a constant time 
operation- we simply go to the given index and check whether or not 


Linear SEarch 
if the index is not known , which is the case most of the time, then 
we can check every element in the array. WE continue checking elements until we find the elemet
we're looking for, or we reach teh end of the arry. This technique for finding an element
by checking through all elements one by one is known as linear search algorithm. 
in the worst case, a linear search ends up checking the enire array. Therefore, the time complexity for a 
linear search is O(N). 

search for 7? 
notice how we take care fo teh edge cases before proceeding with teh 
actual search, and tehat we dont check the rest of the elements once we'd found the 
element we were looking for. 

There are many variations to this algorithm, such as returning the first location, 
last location, or all the loations. 


Binary search 
this selection is optional. It briefly introduces a more advanced searching algorithm
taht you will learn more about in teh later explore card. 
tehr eis another way of searching an array. If the elements in teh array are in sorted order, 
then we can use binary search . Binary search is where we
repeatedly look at the middle element in teh array, and determine whether the element we're looking for must 
be to teh left, or to the right. Each time we do this, we're able to halve the umber of element we still need
to search , making binary search a lot faster than linear search. 


The downside of biary search though is that it only works if the data is sorted. If we only need to 
perform a single search, then it's faster to just do a linear seach, as it
takes longer to sort than to linear search. 

You can find out more about binary search on our Binary search explore. 
*/