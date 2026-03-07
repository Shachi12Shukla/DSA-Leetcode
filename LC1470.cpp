#include <iostream>
#include<bits/stdc++.h>
using namespace std;

vector<int> shuffle(vector<int>& nums, int n) {
        int arr_size = nums.size();
        vector<int> newarr;

        int l = 0; int h = n;   // two pointer approach

        while(l < n && h < arr_size){
            newarr.push_back(nums[l]);
            newarr.push_back(nums[h]);
            l++;
            h++;
        }

        return newarr;
    }

int main(){

    vector<int> arr = {1,2,3,4,4,3,2,1};    // expected output : 1,4,2,3,3,2,4,1

    vector<int> shuffled_arr = shuffle(arr,4);

    cout << "Given array after shuffle"<<endl;

    for(int val : shuffled_arr){
        cout << val << " ";
    }

   return 0;
}