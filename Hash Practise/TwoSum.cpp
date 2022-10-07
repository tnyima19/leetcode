#include<iostream>
#include<map>// for hash map
#include<iterator> // for iterating. 
#include<unordered_set>// for hashset
#include<vector>

using namespace std;

/*
Two sum using Hash, 
Given array of integers nums and an integer target, return indices of two numbers such that they add up to target. 
nums = [2,7,11,15,]
target = 9
HashMap
values : index
        |
        |
        |
    
Time : O(n)
Space: O(n)
*/

vector<int> twoSum(vector<int>& nums, int target){
map<int,int> hm;// i, sum
vector<int> final_vector;
map<int, int>::iterator  itr ;
int result = 0;
    for(int i=0;i<nums.size();++i){
        result = target - nums[i];
        itr = hm.find(result);
        if(itr != hm.end()){
            final_vector.push_back(itr->second);
            final_vector.push_back(i);
        }
        hm.insert(pair<int, int> (nums[i],i));
    }
    return final_vector;

}

int main(){


    return 0;
}
/*
HashMap is a key -> value ( key to value) map, eg: {a->1, b-> 2, c -> 2, d->1}
notice in my examples above that the hash map there must not be duplicate keys, but it may have duplicate values 
In the hash set, there must be no duplicate values. 



They are entirely differnt contructs. A hashMap is an implementation of Map. A Map maps keys to values. they look up occurs using the ahs
On teh other had, a hashset is an implementation of set. A set is desined to 
match mathematical model of a set. A HashSet does use a HashMap to back its implemenation, as you noted. 
However, it implements an enntirely different inteface. 
When you are looking for what will be the best Collection for your purpses , this Tutorial is a good starting place. If 
you truly want to know what's going on, there's a book for that too. 

map<int, int>
map<int, string>
map<stirng, int>
MAP METHODS. 
map::insert(); // insert. 
map::count();// count
map::erase(); // use to erase elements from teh container. 
map::rend(); returns a reverse iterator pointing to teh theoretical element right before the 
        first key-value pair in the map(which is considered in reverse end)
map::find();// returns a reverse iterator which points to the last element of the map. 
map::size()
map::crbegin() and crend()// crbegin() returns a constant reverse iterator referring to the last element int eh map container. 
    // crend() returns a constant reverse iterator pointing to teh theoretical element before the first element inthe map. 

map::cbegin() adn cend() // cbegin() returns a constatnt iterator referring to the first element in teh map container.end() returns 
            a constant iterator pinting the theoreticalelement that follows the last element in teh multimap. 

map::emplace() INserts teh key and its element in the map container. 


std::unordered_sert<int> X {2020,2018, 2019};
for(auto Y: X)
std:;cout<<Y<<'\n';
return 0;

unordered_set::insert(something);
unordered_set::find(something);// if reuulst == set.end()// that means not found. 
unordered_set<sting>::iterator itr;

*/