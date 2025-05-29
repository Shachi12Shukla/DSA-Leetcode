#include <iostream>
#include<bits/stdc++.h>
using namespace std;

vector<int> findEvenNumbers(vector<int>& digits) {
        set<int> uniqueNumbers;
        int n = digits.size();
        // Find permutations of three digits
        for(int i = 0; i<n; i++ ){
            if(digits[i] == 0) continue;

            for(int j = 0; j < n; j++){
                if(j == i) continue;

                for(int k = 0; k < n; k++){
                    if( k == j | k == i) continue;

                    // check even
                    if( digits[k] % 2 == 0){
                        int num = digits[i] * 100 + digits[j] * 10 + digits[k];
                        uniqueNumbers.insert(num);
                    }
                }
            }
        }
        return vector<int>(uniqueNumbers.begin() , uniqueNumbers.end());
        
    }
int main(){

    vector<int> digits = {2,1,3,0};

    vector<int> unique = findEvenNumbers(digits);

    // print unique integers
    for(auto element : unique){
        cout << element << " ";
    }





return 0;
}