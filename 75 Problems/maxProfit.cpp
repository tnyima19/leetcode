#include<iostream>
#include<vector>
using namespace std;

int maxProfit(vector<int>& prices){
    int profit;
    int max_profit = 0;
    int i=0;
    int j = i+1;

    while(j<prices.size()){
        if(prices[i]> price[j]){// incase of loss
            i++;
        }else{
            profit = prices[j] -price[i];
            if(max_profit< profit){
                max_profit = profit;
            }
            j++;
        }
    }

    return max_profit;
}


int main(){


    return 0;
}

