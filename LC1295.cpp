#include <iostream>
#include<bits/stdc++.h>
using namespace std;
 int findNumbers(vector<int>& nums) {
        int n = nums.size();
        int EvenDigitCount = 0;
        for(int i = 0 ; i < n ; i++){
            int integer = nums[i];
            int NumberOfDigits = 0;
            if(nums[i] == 0) return 1; // count [000] as a valid integer of nums
            while( integer != 0){
                // int digit = integer % 10;
                integer = integer / 10;
                // cout << " Integer "<<integer << endl;
                NumberOfDigits++;
                // cout << "NumberOfDigits "<< NumberOfDigits << endl;
            }
            if(NumberOfDigits % 2 == 0){
                // contains even number of digits
                EvenDigitCount++;
            }
        }
        return EvenDigitCount; 
    }
int main(){
    vector<int> nums = {12,345,2,6,7896};
    int count = findNumbers(nums);
    cout << count << endl;





    return 0;
}