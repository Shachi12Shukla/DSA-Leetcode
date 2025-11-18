#include <iostream>
#include<bits/stdc++.h>
using namespace std;

  bool isOneBitCharacter(vector<int>& bits) {
        int i = 0;
        int n = bits.size();

        while(i < n - 1){  // prevents out of bound access
           
           int bit = bits[i];

           if(bit == 1){
                // move two bits
                i += 2;
           }

           if(bit == 0){
               // move one bit
               i += 1;
           }
        }
        
        return (i == n - 1);
    }


int main(){

    vector<int> bits = {1,0,1,1};

    if(isOneBitCharacter(bits)){
        cout << "The given binary array ends with a single bit i.e 0"<<endl;
    }
    
    else{
        cout << "The given binary array ends with a double bit i.e 11 or 10"<<endl;
    }





return 0;
}