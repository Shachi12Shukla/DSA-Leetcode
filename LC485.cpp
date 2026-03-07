#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int findMaxConsecutiveOnes(vector<int>& nums) {

        int n = nums.size();
 
        if(n == 1) return nums[0];  // explicit 2 cases

        int l = 0;  
        int h = 1;
        int ones = nums[0];   // for case nums = [0,0]
        // ones variable keeps track of streak

        int max_ones = ones;

        while(h < n){
            if(nums[l] == nums[h] && nums[l] == 1){
                ones++;
                h++;
            }

            else{
                ones = nums[h];    // not nums[l]
                l = h;
                h++;
            }  
            max_ones = max(ones,max_ones);   // important to update on each iteration.
        }
        return max_ones;
    }

int main(){

    vector<int> arr = {1,1,0,1,1,1};

    cout << "Maximum Consecutive Ones in the given array : "<< findMaxConsecutiveOnes(arr);





    return 0;
}
   