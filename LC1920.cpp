#include <iostream>
#include<bits/stdc++.h>
using namespace std;

vector<int> buildArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;
        for(int i = 0 ; i < nums.size(); i++){
            int element = nums[i];
            ans.push_back(nums[element]);
        }
        return ans;
        
    }
int main(){

    vector<int> nums = {0,2,1,5,3,4};
    vector<int> ans = buildArray(nums);

    // print array
    for(auto element : ans){
        cout << element << " ";
    }





return 0;
}