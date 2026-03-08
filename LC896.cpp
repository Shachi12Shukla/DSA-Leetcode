#include <iostream>
#include<bits/stdc++.h>
using namespace std;

bool isMonotonic(vector<int>& nums) {
        int n = nums.size();
        
        bool increasing = true;
        bool decreasing = true;

        for(int i = 1; i < n; i++){
            if(nums[i] > nums[i-1]) decreasing = false;

            else if(nums[i] < nums[i-1]) increasing = false;

            if( !increasing && !decreasing) {
                // neither increasing nor decreasing
                return false;
            }
        }
        
        return true;
    }

int main(){
    
    vector<int> nums = {1,3,2};
    
    isMonotonic(nums) ? cout << "the given array is monotonic" : cout << "the given array is not monotonic" << endl;
    

   return 0;
}