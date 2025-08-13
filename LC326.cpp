#include <iostream>
#include<bits/stdc++.h>
using namespace std;

 bool isPowerOfThree(int n) {
        // Without Recursion 
        
        if(n <= 0) return false; // IMP 

        while( n % 3 == 0){
            // remainder not equal to 1
            // keep dividing it 
            n /= 3;
        }

        if(n==1){
            return true;
        }
        
        return false;

    }


int main(){
    int n;
    cout << "Enter a number to check if it is a power of three"<< endl;
    cin>> n;

    if(isPowerOfThree(n)){
        cout << "Power of three!"<< endl;
    }

    else{
        cout << "Not a power of three"<< endl;
    }





return 0;
}