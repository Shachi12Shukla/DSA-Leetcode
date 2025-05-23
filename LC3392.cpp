#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int countSubarrays(vector<int>& arr) {
        int n = arr.size();
        // Bruteforce
        int count = 0;
        for(int i = 0; i < n; i++){
            vector<int> subarray;
            for(int j = i ; j < n; j++){
                subarray.push_back(arr[j]);
                if(subarray.size() == 3){
                    int sum = 0;
                    sum = subarray.at(0) + subarray.at(2);
                    if(sum == (double)subarray.at(1) / 2) count++;
                }
            }
        }
        return count;
    }
int main(){

    vector<int> arr = {1,2,1,4,1};
    int c = countSubarrays(arr);
    cout << "The count of subarrays of length three with a condition is "<< c << endl;


    





return 0;
}