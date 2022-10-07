#include<iostream>
#include<unordered_set>
#include<map>
#include<vector>
using namespace std;


/*
Given a string s, find the length of the longest substring wihotu repeating characters. 
s = "abcabcbb"

sets
{b,c}
a

//stack, 
LIFO

FILO

char :: count
a       1
b       2
c       3
a
*/

int lengthOfLongestSubstring(string s){
int max = 0;
int count = 0;
unordered_set<char> letters;
unordered_set<char>::iterator itr;
int l = 0;
//map<char, int> m; // char, and count;
    if(s.size() == 0){
        return 0;
    }


    for(int r=0;r<s.size();++r){
        while(letters.find(s[r]) != letters.end()){// when set contains s[r]
        //erase leftmost,
        itr = letters.find(s[l]);
        letters.erase(itr);// erase left most
        ++l;
        // addright most
        }
        letters.insert(s[r]);// add right most
        count = r-l + 1;
        if(max < count){
            max = count;
        }
    }
    return max;

}

int main(){
    string s = "pwwkew";
    int total = lengthOfLongestSubstring(s);
    cout<<total<<endl;

    return 0;
}