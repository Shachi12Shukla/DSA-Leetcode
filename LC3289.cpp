#include <iostream>
#include<bits/stdc++.h>
using namespace std;

// Using hash set
vector<int> getSneakyNumbers(vector<int>& digits) {
        unordered_set<int> nonRepeat;
        vector<int> repeat;

        for(int i=0; i < digits.size(); i++){
            int digit = digits[i];

            if(nonRepeat.find(digit) == nonRepeat.end()){
                nonRepeat.insert(digit);
            }

            else{
                repeat.push_back(digit);
            }
        }

        return repeat;
    }

int main(){

    
    vector<int> digits = {0,3,2,1,3,2};
    vector<int> ans = getSneakyNumbers(digits);
    
    cout << "The two repeated/mischievous numbers are" << endl;
    for(auto it : ans){
        cout << it << " ";
    }




   return 0;
}