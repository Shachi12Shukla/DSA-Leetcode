#include <iostream>
#include<bits/stdc++.h>
#include<set>
using namespace std;

int maxSum(vector<int>& nums) {
        set<int> unique;
        
        // store unique elements
        for(int i = 0; i < nums.size(); i++){
            unique.insert(nums[i]);
        }

        // calculate sum 
        int sum = 0;
        for(auto it : unique){
            if(it > 0){
                // sum of all positive elements
                sum += it;
            }
        }

        // if any element or all element is negative so 
            if(sum==0){
                // return max element (least negative)
                return *(--unique.end());
            }

        return sum;

    }
int main(){
    vector<int> arr ={1,2,-1,-2,1,0,-1};

    cout << maxSum(arr) << endl; // 3 
    // explaination - Deleting the elements nums[2] == -1 and nums[3] == -2, and 
    // selecting the subarray [2, 1] 
    // from [1, 2, 1, 0, -1] to obtain the maximum sum
 



return 0;
}