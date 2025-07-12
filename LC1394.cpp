#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int findLucky(vector<int>& arr) {
    int max_size = 500;
        
    // create a hash table vector 
    vector<int> freq(max_size + 1 , 0);

    // count freq of each integer 
    for(int num = 0;  num < arr.size() ; num++){
        freq[arr[num]]++;
    }
        
    int lucky_int = -1;
    // traverse hash vector
    for(int i = 1; i <= max_size ; i++){
        if(freq[i] == i){
            // i is a lucky number.
            lucky_int = max(lucky_int , i);
        }
    }
    return lucky_int;

    }
int main(){

    vector<int> arr1 = {2,2,3,4};
    vector<int> arr2 = {1,2,2,3,3,3};
    cout << findLucky(arr1) << endl;
    cout << findLucky(arr2) << endl;




return 0;
}