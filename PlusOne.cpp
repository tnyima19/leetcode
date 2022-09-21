#include<iostream>
#include<vector>
#include<sstream>

using namespace std;


    void shift(vector<int>& digits){
        for(int i=0;i<digits.size()-1;++i){
            //cout<<"digits shift"<<digits[i]<<endl;
            digits[i+1] = digits[i];
            //cout<<"after shift "<<digits[i]<<endl;
        }
        digits[0] = 1;
    }
    
    vector<int> plusOne(vector<int>& digits) {
        //cout<<"i am in"<<endl;
         int last = digits.size()-1;
        if(digits[last]< 9){ // esay cases,
            digits[last] = digits[last]+1;
            return digits;
            
        }
        
        if(digits[last] == 9){// second condition,
        //cout<<"9 condition"<<endl;
            int curr = last;
            while(digits[curr] == 9 && curr>=0){
                //cout<<"inside while";
                digits[curr] = 0;
                //cout<<digits[curr]<<endl;
                if(curr > 0){
                    --curr;
                }
            }
            if(curr == 0 && digits[curr]== 0){
                //cout<<"0 th element has 9"<<endl;
                //for(int i=0;i<digits.size();++i){
                  //  cout<<" digits: "<<digits[i]<<endl;
                //}
                digits.push_back(1);
                shift(digits);
            }else {
                digits[curr] = digits[curr]+1;
            }
            
        }
        

        return digits;  
    }
vector<int> plusOne2(vector<int>& digits) {
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
        
        
        return output;
        
    }

int main(){
    vector<int> new_arr;
    new_arr.push_back(9);
    new_arr.push_back(9);
    new_arr.push_back(9);

    plusOne(new_arr);
    for(int i=0;i<new_arr.size();++i){
        cout<<new_arr[i]<<endl;
    }


return 0;
}