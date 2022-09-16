#include<iostream>
#include<vector>
#include<sstream>

using namespace std;


vector<int> plusOne(vector<int>& digits) {
        stringstream ss;
        //string digits_string;
        int num;
        vector<int> output;
        
        
        // best way is to add +1 first to teh num and then 
        // add it to a new vector, of required size. 
        
        for(int i=0;i<digits.size();++i){
            ss<<digits[i];
        }
        ss >> num;
        num = num + 1;
        //cout<<num<<endl;

        stringstream ss1;
        string num_string;
        ss1 >> num_string;

        for(int i=0;i<num_string.size();++i){
            cout<<num_string[i]<<endl;
        }

        // int final_num;
        // while(ss1<<num){
        //     //stringstream ss2;
        //     //ss1 << num;
        //     ss1 >> final_num;
        //     output.push_back(final_num);
        // }
        
        
        
        return output;
        
    }

int main(){
    vector<int> new_arr;
    new_arr.push_back(1);
    new_arr.push_back(2);
    new_arr.push_back(3);

    plusOne(new_arr);


return 0;
}